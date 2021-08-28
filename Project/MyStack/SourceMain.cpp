#include "Stack.hpp"
#include <iostream>
#include <conio.h>

int main() {
	mawile::Stack<int> myStack;
	myStack.push(1);
	myStack.push(3);
	myStack.push(5);

	myStack.pop();
	myStack.pop();

	myStack.push(9);
	myStack.push(8);
	myStack.push(7);

	while (!myStack.empty()) {
		std::cout << myStack.top() << ' ';
		myStack.pop();
	}

	_getch();
}