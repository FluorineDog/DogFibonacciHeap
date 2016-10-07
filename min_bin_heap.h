#include <algorithm>
#include <vector>
#include <random>
//using namespace std;

using std::vector;
using T = long long;
using std::pair;
using std::make_pair;
using pti = pair<T, int>;

class BinaryHeap{
	
public:
	BinaryHeap(std::default_random_engine& e, int mysize) 
	{
		size = mysize;
		data.resize(size);
		location.resize(size);
		for(int i = 1; i < size; ++i){
			data[i] = std::make_pair(e(), i);
			location[i] = i;
		}
		make_heap();
	}
	
	void fixup(int leaf){
		int cur = leaf;
		while(cur > 1) {				
			if(data[cur/2] > data[cur]){
				swap(data[cur/2], data[cur]);
				cur /= 2;
			}
			else{
				break;
			}
		}
	}
	void make_heap() {
		for(int i = size/2; i-->1;){			
			fixdown(i);
		}
	}
	
	void extract_min(){
		swap(data[1], data[size - 1]);
		--size;
		fixdown(1);
	}

	void decrease_key(int index, T new_data){
		if(data[location[index]].first <= new_data){
			return;
		}
		data[location[index]].first = new_data;
		fixup(location[index]);
	}
	
	void swap(pti& a, pti& b){
		std::swap(a, b);
		std::swap(location[a.second], location[b.second]);
	}
	T minimum(){
		return data[1].first;
	}
	void fixdown(int root){
		int cur = root;
		while(cur < size/2) {
			int min = cur;
			if(data[min] > data[cur*2]){
				min = cur * 2;
			}
			if(data[min] > data[cur*2 + 1]){
				min = cur * 2 + 1;
			}
			if(min != cur){
				swap(data[min], data[cur]);
				cur = min;
			}
			else{
				break;
			}
		}
	}

private:
	vector<pair<T, int>> data;
	vector<int> location;
	int size; // fake size since data[0] always null
};

