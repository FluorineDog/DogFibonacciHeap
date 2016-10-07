#include <iostream>
#include "fiboheap.h"
#include "min_bin_heap.h"
using namespace std;
std::default_random_engine e1(123);
std::default_random_engine e2(123);
static const int size = 100;
#include <vector>
int main(){
	auto i = std::vector<int>(100);
	FibonacciHeap heap;
	BinaryHeap biheap(e2, size);
	Iter iters[size] = {};
	for(int i = 1; i < size; i++){
		iters[i] = heap.insert(e1());
	}
	std::cerr << (biheap.minimum() == heap.minimum());
	// heap.decrease_key(iters[14], -1);
	return 0;
}