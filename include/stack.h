// #include guards, preventing doulbe declaration 
#ifndef STACK_H	
#define STACK_H

#include <vector>
#include <iostream>
using namespace std; 

// default integer array size 
extern int DEFAULT_ARRAY_SIZE; 

// simple integer stack
class IntStack {
private:
	vector<int> int_stack;	

public:
	IntStack();
	void push(int elem);
	int pop();
	int getSize();
};

#endif

