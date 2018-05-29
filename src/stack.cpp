#include "../include/stack.h"

int DEFAULT_ARRAY_SIZE = 10;

IntStack::IntStack() {
	for(int i=1; i<=DEFAULT_ARRAY_SIZE; i++) {
		int_stack.push_back(i);
	}
}

void IntStack::push(int elem) {
	int_stack.push_back(elem);
	return;
}

int IntStack::pop() {
	if(!int_stack.empty()) {
		int last = int_stack.back();
		int_stack.pop_back(); // remove the last element of stack
		return last;
	}
	else {
		cout << "[Error] Stack is empty" << endl;
		return -1;
	}
}

int IntStack::getSize() {
	return int_stack.size();
}

