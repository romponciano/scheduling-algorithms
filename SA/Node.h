#include "Job.h"

class Node {
	public: 
		Job value;
		Node* next;
		Node():next(nullptr) {};
		Node(Job val):value(val),next(nullptr) {};
};