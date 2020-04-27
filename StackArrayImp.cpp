#include <iostream>
using namespace std;
#define MAX 1000 // Macro definitions allows to declar constant values
class Stack {
	int top;
public:
	int a[MAX]; // Maximum size of Stack
	Stack()
	{
		top = -1;
	}
	void push(int x);
	int pop();
	int peek();
	bool isEmpty();
};
void Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow" << endl;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n" << endl;
	}
}
int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow" << endl;
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty" << endl;
		return 0;
	}
	else {
		return a[top];
	}
}
bool Stack::isEmpty()
{
	return (top < 0);
}
// Driver program to test above functions
int main()
{
	class Stack s;
	s.pop();
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.peek() << endl;
	cout << s.pop() << " Popped from stack\n";
	getchar();
}