#include <iostream>

using namespace std;

struct node 
{
	int data;
	node *next;
};

typedef struct node *queueN;

typedef struct {
	queueN front;
	queueN rear;
} queue;

queue que;

void makeEmptyQue()
{
	que.front = NULL;
	que.rear = que.front;
}

bool isEmpty()
{
	return (que.front == NULL);
}

void enQueue(int value)
{
	queueN temp;
	temp = (queueN)malloc(sizeof(queueN));
	temp->data = value;
	temp->next = NULL;
	
	if (isEmpty()) {
		que.front = temp;
		que.rear = que.front;
	}
	else {
		que.rear->next = temp;
		que.rear = temp;
	}
}

void deQueue()
{
	if (isEmpty()) {
		cout << "fail";
	}
	else {
		que.front = que.front->next;
	}
}

void front()
{
	if(isEmpty()) {
		cout << "fail";
	}
	else {
		cout << que.front->data;
	}
}

int main()
{
	makeEmptyQue();
	for (int i=0; i<5; i++) {
		enQueue(i);
	}
	while (que.front != NULL)
	{
		front();
		deQueue();
	}
	return 0;
}
