#include <iostream>
#define TITLE "BAI3"

using namespace std;

//ten ham tham khao
int isEmpty (); //kiem tra danh sach rong
//int Insert_k (List *L, item x, int k); //chen x vao vi tri k
//void Input (List *L);//nhap danh sach
//void Output (List L);//xuat danh sach
//int Search (List L, item x); //tim phan tu x trong danh sach
//int Del_k (List *L, item *x, int k);//xoa phan tu tai vi tri k
//int Del_x(List *L, item x);//xoa phan tu x trong danh sach
//item init_x(); //tao phan tu x.
void addNodeEnd(int data);
void addNodeFirst(int data);

struct node {
	int data;
	node *next;
};

node *note;					//if use "node k = new node();", pointer will gen an address != NULL
							//so i don't want to use init function for simple program
void addNodeEnd(int data)
{
	node *temp = new node();
	temp->data = data;
	temp->next = NULL;
	
	if (note == NULL) {
		note = temp;
		note->next = NULL;
	}
	else {
		node *count = note;
		while (count->next != NULL) {
			count = count->next;
		}
		count->next = temp;
	}
}

void addNodeFirst(int data)
{
	node *temp = new node();
	temp->data = data;
	temp->next = NULL;
	
	if (note == NULL) {
		note = temp;
		note->next = NULL;
	}
	else {
				
	}
}

int isEmpty()
{
	if (note == NULL) {
		return 1;
	}	
	return 0;
}

void display()
{
	node *count = note;
	if (isEmpty()) {
		cout << "empty";
		return;
	}
//	cout << count->data << " ";
	while (count->next != NULL) {
			cout << count->data << " ";
			count = count->next;
	}
}

int main()
{
	cout << TITLE << endl;

	addNodeEnd(1); 	addNodeEnd(2); 	addNodeEnd(3); 	addNodeEnd(4); 	addNodeEnd(5);
	display();
	return 0;
}
