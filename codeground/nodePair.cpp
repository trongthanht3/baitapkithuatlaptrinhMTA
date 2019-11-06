#include <iostream>

using namespace std;

struct pairGr {
	int x;
	int y;
};

struct node {
	pairGr *pa;
	node *next;
};

void addEndNode(node *nodeA, pairGr *paA) {
	node *temp = new node();
	temp->pa = paA;
	temp->next = NULL;
	
	if (nodeA == NULL) {
		nodeA = temp;
	}
	else {
		node *cs = nodeA;
		while (cs != NULL) {
			cs = cs->next;
		}
		cs->next = temp;
	}
}

void display(node *nodeA)
{
	node *cs = nodeA;
	while (cs != NULL) {
		cout << cs->pa->x;
		cs = cs->next;
	}
}

int main()
{
	pairGr *paA = new pairGr();
	paA->x = 1;
	paA->y = 2;
	node *nodeA = new node;
	nodeA->pa = paA;
	cout << nodeA->pa->y << endl;
	pairGr *paB = new pairGr();
	paB->x = 55;
	paB->y = 77;
	addEndNode(nodeA, paB);
	return 0;
}
