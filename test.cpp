#include <iostream>
#include "fiboheap.h"
using namespace std;

int main(){
	FibonacciHeap heap;
	Iter iters[100] = {};
	for(int i = 0; i < 100; i++){
		iters[i] = heap.insert(i);
	}
	heap.extract_min();
	heap.decrease_key(iters[85], -1);
	heap.decrease_key(iters[92], -2);
	// heap.decrease_key(iters[14], -1);
	return 0;
}