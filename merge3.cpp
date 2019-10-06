#include <iostream>
using namespace std;

void merge(int mang[], int left, int mid, int right)
{
	int i, j, k;
	
	int n1 = mid - left + 1; // so phan tu mang1
	int n2 = right - mid;	 // so phan tu mang2
	
	int l_temp[n1], r_temp[n2];    // tao 2 mang dem de chua data
	
	for (i=0; i<n1; i++)
		l_temp[i] = mang[left+i];  //copy data vao, bat dau tu dau left cua mang[]
	for (j=0; j<n2; j++)
		r_temp[j] = mang[mid+1+j]; //copy data vao, bat dau tu dau mid+1 cua mang[]
	
	i = 0;		//reset chi so dem cua 2 mang temp
	j = 0;
	k = left;	//chi so bat dau cua mang[] duoc dua vao de quy
	
	while (i<n1 && j<n2) {
		if (l_temp[i] <= r_temp[j]) {
			mang[k] = l_temp[i];
			i++;
			k++;
		}
		else {
			mang[k] = l_temp[j];
			j++;
			k++;
		}
	}
	
	while (i<n1) {
		mang[k] = l_temp[i];
		i++;
		k++;
	}
	while (j<n2) {
		mang[k] = l_temp[j];
		j++;
		k++;
	}
}

void mergeSort(int mang[], int left, int right)
{
	if (left < right) {
		int mid = (left+right)/2;
		
		mergeSort(mang, left, mid);
		mergeSort(mang, mid+1, right);
		
		merge(mang, left, mid, right);
	}
}

void inMang(int mang[], int size)
{
	for (int i=0; i< size; i++)
		cout << mang[i] << " ";
	cout << endl;
}

int main()
{
//	int mang1[] = {6,3,1,4,1,42,72,332,13,89,56,8,5,32,4,6,17,34,89,657,72,14,56,3,4,6,15,23};
//	int mang2[] = {1,5,7,3,452,67,23,546,782,3,45,7,83,45};

	int mang1[] = {1,4,6,7,8,9,23,56};
	int mang2[] = {2,3,3,6,7,8,9};

	int mang[] = {6,3,1,4,1,42,72,332,13,89,56,8,5,32,4,6,17,34,89,657,72,14,56,3,4,6,15,23};
	int size = sizeof(mang)/sizeof(int);
	
	cout << "before: " << endl;
	inMang(mang, size);
	
	mergeSort(mang, 0, size-1);
	
	cout << "after: " << endl;
	inMang(mang, size);
	return 0;
}