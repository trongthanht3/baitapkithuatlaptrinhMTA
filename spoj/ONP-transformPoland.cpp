#include <iostream>

using namespace std;

struct node 
{
	char data;
	node *next;
};

node *stack;

void push(char value)
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

char pop()
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

int checkOperator(char c)
{
	switch (c) {
		case '+':
			return 2;
		case '-':
			return 3;
		case '*':
			return 4;
		case '/':
			return 5;
		case '^':
			return 6;
		case '(':
			return 1;
		case ')':
			return -1;
		default:
			return -2;			
	}
}

int main()
{
	int t;
	string s;
	cin >> t;
	cin.ignore();
//	t=3;
	for (int i=0; i<t; i++) {
		getline(cin, s);
//		s = "(a+(b*c))";
		int len = s.length();
		for (int j=0; j<len; j++) {
			int chk = checkOperator(s[j]);
			if (j != 0) {
				int chkPre = checkOperator(stack->data);
				if (chk != -2) {
					if (chk == -1) {
						while (stack->data != '(') {
							cout << pop();
						}
						pop();
					}
					else if (chk == 1) {
						push(s[j]);
					}
					else {
						if (chk < chkPre) {
							while (chk < chkPre) {
								cout << pop();
							}
							push(s[j]);
						}
						else {
							push(s[j]);
						}
					}
				}
				else {
					cout << s[j];
				}
			}
			else {
				if (chk != -2) {
					push(s[j]);
				}
				else {
					cout << s[j];
				}
			}
		}
		cout << endl;
	}
	
	
	
	
	display();
	return 0;
}
