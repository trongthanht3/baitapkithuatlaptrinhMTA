#include <iostream>

using namespace std;

struct node 
{
	int data;
	node *next;
};

node *stack;

void push(int value)
{
	node *temp = new node();
	temp->data = value;
	temp->next = NULL;
	
	if (stack == NULL) {
		stack = temp;
	}
	else {
		temp->next = stack;
		stack = temp;
	}
}

int pop()
{
	node *temp = new node();
	
	if (stack == NULL) {
		cout << "error";
	}
	else {
		temp = stack;
		stack = stack->next;
	}
	return temp->data;
}

int peek()
{
	if(stack == NULL) {
		cout << "empty";
	}
	else {
		return stack->data;
	}
}

void display()
{
	node *cs = stack;
	while (cs != NULL) {
		cout << cs->data << " ";
		cs = cs->next;
	}
}

int main()
{
	int K, N;
	int *pN = &N;
	cin >> K;
	for (int i=0; i<K; i++) {
		cin >> N;	int a[*pN];
		for (int j=0; j<N; j++)
			cin >> a[j];
		for (int i=0; i<N; i++) {
			push(a[i]);
		}
		for (int i=0; i<N; i++) {
			cout << pop();
			if(stack != NULL)
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}
