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

void pop()
{
	node *temp = new node();
	
	if (stack == NULL) {
		cout << "error";
	}
	else {
		temp = stack->next;
		stack = temp;
	}
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
	for (int i=0; i<5; i++) {
		push(i);
	}
	display();
	pop(); cout << "\n";
	display(); cout << "\n";
	cout << peek();
	cout << "\nhi";
	return 0;
}
