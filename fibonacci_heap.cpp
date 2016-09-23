#include "..\FibonacciHeap\fiboheap.h"
#include "fibonacci_heap.h"
#include "map"
double FibonacciHeap::nega_inf = std::numeric_limits<double>::min();
FibonacciHeap::FibonacciHeap()
	:root(nullptr)
{
}

Iter FibonacciHeap::insert(double x)
{
	this->length++;
	auto node = new FiboHeapNode(x);
	add_to_child_list(root, node);
	if (!root || x < minimum()) {
		root = node;
	}
	return node;
}

double FibonacciHeap::minimum()
{
	return root->data;
}

bool FibonacciHeap::extract_min()
{
	if (!root) {
		return false;
	}
	auto min = root;
	if (min->child) {
		auto child_iter = min->child;
		while (child_iter->parent) {
			// damn algorithm to keep parent
			child_iter->parent = nullptr;
			child_iter->mark = false;
			child_iter = child_iter->next_node;
		}
		merge_list(root, min->child);
		min->child = nullptr;
	}
	if (min->next_node == min) {
		root = nullptr;
	}
	else {
		min->next_node->prev_node = min->prev_node;
		min->prev_node->next_node = min->next_node;
		root = min->next_node;
		consolidate();
	}
	return true;
}

FibonacciHeap FibonacciHeap::merge(FibonacciHeap&& heap_a, FibonacciHeap&& heap_b)
{
	FibonacciHeap heap;
	// deal with empty heap
	if (!heap_a.root) {
		//heap.root = heap_b.root;
		//heap.length = heap_b.length;
		//heap_b.root = nullptr;
		//heap_a.length = 0;
		return std::move(heap_b);
	}
	else if(!heap_b.root){
		return std::move(heap_a);
	}
	merge_list(heap_a.root, heap_b.root);
	heap.root = heap_a.minimum() < heap_b.minimum() ? heap_a.root : heap_b.root;
}

void FibonacciHeap::decrease_key(Iter iter, double key)
{

}

void FibonacciHeap::remove(Iter iter)
{
	decrease_key(iter, nega_inf);
	extract_min();
}

void FibonacciHeap::clear()
{
	//do nothing until 
}

Iter FibonacciHeap::add_to_child_list(Iter child, Iter node)
{
	if (child == nullptr) {
		node->next_node = node;
		node->prev_node = node;
		if (child->parent) {
			child->parent->degree++;
		}
	}
	node->next_node = child->next_node;
	node->prev_node = child;
	node->next_node->prev_node = node;
	node->prev_node->next_node = child;
	node->parent = child->parent;
	
}

void FibonacciHeap::merge_list(Iter list_a, Iter list_b)
{
	auto beg_a = list_a->next_node;
	auto end_a = list_a;
	auto beg_b = list_b->next_node;
	auto end_b = list_b;
	end_a->next_node = beg_b;
	end_b->next_node = beg_a;
	beg_a->prev_node = end_b;
	beg_b->prev_node = end_a;
}


void FibonacciHeap::consolidate()
{
	Iter container[50] = {};
	auto current = root;
	Iter workload = nullptr;
	while (true)
	{
		if (workload) {
			if(container[workload->degree])
		}
	}
}
