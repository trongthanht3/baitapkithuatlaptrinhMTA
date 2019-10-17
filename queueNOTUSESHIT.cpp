#include <iostream>

using namespace std;

struct qNode
{
	int data;
	qNode *next;
};

struct queue
{
	qNode *front;
	qNode *rear;
};

queue *que = new queue();

void makeEmptyQue()
{
	que->front = NULL;
	que->rear  = NULL;
}

bool isEmpty()
{
	return (que->front == NULL);
}

void enQueue(int value)
{
	qNode *temp = new qNode();
	temp->data = value;
	temp->next = NULL;
	
	if (isEmpty()) {
		que->rear = temp;
		que->front = que->rear;
	}
	else {
		que->rear->next = temp;
		que->rear = temp;
	}
}

void deQueue()
{
	if (isEmpty()) {
		cout << "fail";
	}
	else {
		que->front = que->front->next;
	}
}

void front()
{
	if(isEmpty()) {
		cout << "fail";
	}
	else {
		cout << que->front->data;
	}
}

int main()
{
	makeEmptyQue();
	for (int i=0; i<5; i++) {
		enQueue(i);
	}
	while (que->front != NULL)
	{
		front();
		deQueue();
	}
	return 0;
}
