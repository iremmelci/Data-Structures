#include <iostream>
#define MAX_SIZE 5
using namespace std;
class Queue
{
private:
	int front, rear, count;
	int QArray[MAX_SIZE];
	int isFull();
	int isEmpty();
public:
	Queue();
	void enqueue(int x);
	int dequeue();
	void peek();
	void displaySize();
};
Queue::Queue()
{
	front = 0;
	count = 0;
	rear = -1;
}
int Queue::isFull()
{
	return (count == MAX_SIZE);
}
int Queue::isEmpty()
{
	return count == 0;
}
void Queue::enqueue(int x)
{
	if (isFull())
	{
		cout << endl << "Queue is full" << endl;
		return;
	}
	rear = (rear + 1) % MAX_SIZE;
	QArray[rear] = x;
	count++;
	cout << x << " enqueued" << endl;
}

int Queue::dequeue()
{
	if (isEmpty())
	{
		cout << endl << "Queue is empty" << endl;
		return 0;
	}
	int item = QArray[front];
	front = (front + 1) % MAX_SIZE;
	count--;
	cout << endl << item << " dequeued from queue\n";
	return item;
}
void Queue::peek()
{
	if (!isEmpty())
	{
		cout << endl << "Front: " << QArray[front] << endl;
	}
}
void Queue::displaySize()
{
	cout << endl << "Size: " << count << endl;
}
int main()
{
	Queue q;
	q.dequeue();
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.dequeue();
	q.enqueue(60);
	q.peek();
	q.displaySize();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.displaySize();

getchar();
}
