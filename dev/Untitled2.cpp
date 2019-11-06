#include <iostream>

using namespace std;
//khai bao queue thu nhat 
struct node{
	int data;
	node*next;
	
};
node*queue;  //khai bao node dau tien
//them phan tu vao cuoi queue 
void themdau(int x){
	node*temp = new node ;
	temp->data= x;
	temp->next= NULL;
	if(queue== NULL){
		queue = temp ;
	}
	else{
		temp->next = queue;
		queue = temp;
		
	}
}

//hàm lay phan tu dau cua queue thu nhat
int  laydau(){
	node*st = new node ;
	st= queue;
	queue = queue ->next;	
	
	return st->data;
}
//khai bao queue thu 2
struct node1{
	int data;
	node1*next;
};
node1*queue1; //khai bao phan tu dau tien cua queue thu 2

//them phan tu vao cuoi queue thu 2
void themdau1(int x){
	node1*temp = new node1 ;
	temp->data= x;
	temp->next= NULL;
	if(queue1== NULL){
		queue1 = temp ;
	}
	else{
		temp->next = queue1;
		queue1 = temp;
		
	}
}
//ham lay phan tu o queue1 
int laydau1(){
	node1*st1 = new node1 ;
	st1 = queue1;
	queue1 = queue1->next;
	
	return st1->data;
}

void ktra(){
	int dem=0;
	for (int i=0; i<3; i++){
		if(laydau==laydau1){
			dem++;
		}
		else{
			cout<<" khong doi xung "<<endl;
		}
	}
	if(dem==3){
		cout<<"doi xung "<<endl;
	}
}

int main (){
	int a[]={1,2,3,3,2,1};
	for(int i=0; i<3; i++){
		themdau(a[i]);
	}
	for(int i=5; i>2; i--){
		themdau1(a[i]);
	}
	
	for(int i=0; i<3; i++){
		cout<<queue->data <<" ";
		queue = queue->next;
	
	}
	cout<<endl;
	for (int i=0; i<3; i++){
		cout<<queue1->data <<" ";
		queue1 = queue1->next;
	}
	cout<<endl;
	
	ktra();
}

