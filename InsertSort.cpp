#include <iostream>

using namespace std;

void insertSort(int mang[], int n)
{
	for (int i=0; i<n-1; i++) {
		int temp = mang[i+1];					//lay pt [i] ra 
		int j = i+1;
		while ((mang[j-1] > temp) && j!=0) {	//tim cho de chen pt [i], dieu kien dung j==0
			mang[j] = mang[j-1];
			j--;
		}
		mang[j] = temp;							//nhet pt [i] vao cho j vua tim duoc
	}
	
	for (int i=0; i<n; i++)
		cout << mang[i] << " ";
}

int main()
{
	int mang[] = {2,4,5,1,2,7,3,734,78,32,35,68,1,0,54,5,8,20,13,44,67,34,7,9,10};
	int mang2[] = {6,1,5,9,2,3};
	int n = sizeof(mang)/sizeof(int);
	
	insertSort(mang, n);
	return 0;
}
