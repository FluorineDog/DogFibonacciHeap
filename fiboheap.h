#ifndef FIBONACCI_HEAP_H_
#define FIBONACCI_HEAP_H_
#include <algorithm>
#include <limits>
struct FiboHeapNode
{
	double data;
	bool mark;
	int degree;
	FiboHeapNode* next_node;
	FiboHeapNode* prev_node;
	FiboHeapNode* child;
	FiboHeapNode* parent;
	FiboHeapNode(double data = 0) :
		data(data),
		mark(false),
		degree(0),
		next_node(nullptr),
		prev_node(nullptr),
		child(nullptr),
		parent(nullptr)
	{}
};
using Iter = FiboHeapNode*;
class FibonacciHeap
{
public:
	FibonacciHeap();
	//~FibonacciHeap();	
	Iter insert(double x);
	double minimum();
	bool extract_min();
	static FibonacciHeap merge(FibonacciHeap&& heap_a, FibonacciHeap&& heap_b);
	void decrease_key(Iter iter, double key);
	void remove(Iter iter);
	void clear();
	static double nega_inf;
private:
	Iter add_to_root_list(Iter node);
	static Iter adopt_child(Iter parent, Iter child);
	static void merge_list(Iter list_a, Iter list_b);
	void consolidate();
	FiboHeapNode* root;	//
	int length;
};
#endif // !FIBONACCI_HEAP_H_