#include <iostream>

using namespace std;

struct binTree {
	int data;
	binTree *left;
	binTree *right;
};

binTree* makeTree(int data)
{
	binTree *temp = new binTree();
	temp->left = NULL;
	temp->right = NULL;
	temp->data = data;
	
	return temp;
}

binTree* addLeaf(binTree *root, int data)
{
	if (root == NULL) {
		return makeTree(data);
	}
	else {
		if (data < root->data) {
			root->left = addLeaf(root->left, data);
		}
		else {
			root->right = addLeaf(root->right, data);
		}
	}
}

binTree* binTreeSearch(binTree *root, int value)
{
	if (root == NULL) {
		cout << "not found! added";
		return makeTree(value);
	}
	else if (root->data == value) {
		cout << "found";
		return root;
	}
	else {
		if (value < root->data) {
			root->left = binTreeSearch(root->left, value);
		}
		else {
			root->right = binTreeSearch(root->right, value);
		}
	}
}

binTree* binTreeSearchReturnAddress(binTree *root, int value)
{
	if (root == NULL) {
		cout << "not found!";
		return NULL;
	}
	else if (root->data == value) {
		cout << "found";
		return root;
	}
	else {
		if (value < root->data) {
			binTreeSearchReturnAddress(root->left, value);			
		}
		else {
			binTreeSearchReturnAddress(root->right, value);
		}
	}
}

binTree* timThangChaMay(binTree* root, int value)
{
	if (root->left == NULL && root->right == NULL) {
		cout << "not found";
		return NULL;
	}
	else if (root->left->data == value || root->right->data == value) {
		cout << "found";
		return root;
	}
	else {
		if (value < root->data) {
			timThangChaMay(root->left, value);
		}
		else {
			timThangChaMay(root->right, value);
		}
	}
}

binTree* leftMost(binTree *root)		// tim con leftMost cua temp->right
{
	while (root->left != NULL) {
		root = root->left;
	}
	return root;
}

void deleteTree(binTree *root, int data)		// theo slide Mr.Phai
{	
	binTree *temp1 = new binTree;				// vi tri can xoa
	binTree *temp2 = new binTree;				// con leftMost cua temp1->right
	binTree *sup1 = new binTree;
//	temp1 = root;
	temp1 = binTreeSearchReturnAddress(root, data);		// tim vi tri xoa
	if (temp1->left == NULL && temp1->right == NULL) {
		free(temp1);
		return;
	}
	else if (temp1->left == NULL) {
		sup1 = temp1->right;
		temp1->data = sup1->data;
		temp1->right = sup1->right;
		temp1->left = sup1->left;
	}
	else if (temp1->right == NULL) {
		sup1 = temp1->left;
		temp1->data = sup1->data;
		temp1->left = sup1->left;
		temp1->right = sup1->right;
	}
	else {
		temp2 = leftMost(temp1->right);						// tim leftMost cua temp1->right
		temp2->left = temp1->left;							// gan left cua leftMost = left cua temp1;
		temp1->data = temp1->right->data;					// cap nhat temp1 moi
//		temp1 = temp1->right;
		temp1->right = temp1->right->right;
//		temp1->left = temp1->right->left;
		cout << "concac";
	}
}

int LeftMostValue( const binTree* root )
{
    while ( root->left != NULL )
        root = root->left;
    return root->data;
}
 

binTree* Delete( binTree* root, int value )
{
    if ( root == NULL )
        return root;
    if ( value < root->data )
        root->left = Delete( root->left, value );
    else if ( value > root->data )
        root->right = Delete( root->right, value );
    else
    {
        // root->data == value, delete this node
        if ( root->left == NULL )
        {
            binTree* newRoot = root->right;
            free( root );
            return newRoot;
        }
        if ( root->right == NULL )
        {
            binTree* newRoot = root->left;
            free( root );
            return newRoot;
        }
        root->data = LeftMostValue( root->right );
        root->right = Delete( root->right, root->data );
    }
    return root;
}

void deleteTreeNew(binTree *root, int data)		// theo slide Mr.Phai
{	
	binTree *cha = new binTree;
	binTree *con = new binTree;
	cha = root;
	if (cha->left->data == data) {
		con = cha->left;
	}
	else {
		con = cha->right;
	}
}

void traceNLR(binTree *root)
{
	if (root != NULL) {
		cout << root->data << " ";
		traceNLR(root->left);
		traceNLR(root->right);
	}
}

int main()
{
	int arr[11] = {40,30,60,20,35,50,70,15,25,65,27};
	binTree *rice = makeTree(arr[0]);
	
	for (int i=1; i<11; i++) {
		addLeaf(rice,arr[i]);
	}
	traceNLR(rice);
//	binTreeSearch(rice, 73);
//	cout << endl;
//	addLeaf(rice, 37);
//	binTreeSearchReturnAddress(rice, 30);
//	timThangChaMay(rice, 69);
//	cout << endl;
//	traceNLR(rice);
	cout << endl;
	Delete(rice, 60);
//	deleteTree(rice, 27);
//	deleteNode(rice, 60);
	cout << endl;
	traceNLR(rice);
	
	return 0;
}
