#include <iostream>
#include <vector>

using namespace std;

struct qNode {
	int data;
	int numChild;
	qNode *next;
	std::vector<qNode*> child;
};

typedef struct {
	qNode *front;
	qNode *last;
} queue;

queue *que = new queue;
qNode *allNode[100];// mang chua cac node
int numC[14]={0,2,2,3,1,2,0,0,2,0,0,0,0,0};

void makeEmptyQueue()
{
	que->front = NULL;
	que->last = que->front;
}

void push(qNode *nodeT)
{
	if (que->front == NULL) {
		que->last = nodeT;
		que->front = que->last;
	}
	else {
		que->last->next = nodeT;
		que->last = nodeT;
	}
}

qNode* pop()
{
	if (que->front == NULL) {
		cout << "fail";
	}
	else {
		qNode *nodeT = new qNode;
		nodeT = que->front;
		que->front = que->front->next;
		return nodeT;
	}
}

qNode* peek()
{
	if (que->front == NULL) {
		return NULL;
	}
	else {
		return que->front;
	}
}

void trongCay()
{
	for (int i=1; i<=13; i++) {
		qNode *temp = new qNode;
		temp->data = i;
		temp->next = NULL;
		temp->numChild = numC[i];
		allNode[i] = temp;
	}
	
	allNode[1]->child.push_back(allNode[2]);
	allNode[1]->child.push_back(allNode[3]);
	
	allNode[2]->child.push_back(allNode[4]);
	allNode[2]->child.push_back(allNode[5]);
	
	allNode[3]->child.push_back(allNode[6]);
	allNode[3]->child.push_back(allNode[7]);
	allNode[3]->child.push_back(allNode[8]);
	
	allNode[4]->child.push_back(allNode[9]);
	
	allNode[5]->child.push_back(allNode[10]);
	allNode[5]->child.push_back(allNode[11]);
	
	allNode[8]->child.push_back(allNode[12]);
	allNode[8]->child.push_back(allNode[13]);
}

void trace() 			//wide trace
{
	push(allNode[1]);
	while (que->front != NULL && que->last != NULL) {
		qNode *temp = pop();
		cout << temp->data << " ";
		if (temp == NULL) {
			cout << "NULL";
		}
		else if (temp->numChild != 0) {
			for (int i=0; i<temp->numChild; i++) {
				qNode *childTemp = temp->child[i];
		 		push(childTemp);
			}
		}
	}
}


//gay recursive trace | height trace
void traceNLR(qNode *nRoot)
{
	cout << nRoot->data << " ";
	for (int i=0; i<nRoot->numChild; i++) {
		traceNLR(nRoot->child[i]);
	}
}

void traceLNR(qNode *nRoot)
{
	if (nRoot->numChild) {
		traceLNR(nRoot->child[0]);
	}
	cout << nRoot->data << " ";
	if (nRoot->numChild > 1) {
		for (int i=1; i<nRoot->numChild; i++) {
			traceLNR(nRoot->child[i]);
		}	
	}
}

void traceLRN(qNode *nRoot)
{
	for (int i=0; i<nRoot->numChild; i++) {
		traceLRN(nRoot->child[i]);
	}
	cout << nRoot->data << " ";
}

int main()
{
	cout << "hi" << endl;
	makeEmptyQueue();
	for (int i=0; i<5; i++) { 				//gay queue
		qNode *nodeT = new qNode;
		nodeT->next = NULL;
		nodeT->data = i;
		
		push(nodeT);
	}
	while (que->front != NULL) {
		cout << peek()->data << " ";
		pop();
	}
	cout << endl;
	trongCay();
	trace();
	cout << endl;
	traceNLR(allNode[1]);
	cout << endl;
	traceLNR(allNode[1]);
	cout << endl;
	traceLRN(allNode[1]);
	return 0;
}
