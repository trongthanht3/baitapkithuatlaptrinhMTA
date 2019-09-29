#include <iostream>

using namespace std;

void mergeSort(int mang1[], int n1, int mang2[], int n2)
{
	int mangS[1000];
	int i = 0;
	int j = 0;
	mergeSort(mang1, n1/2, mang2, n2/2);
	while (i<n1 && j<n2) {
		if (mang1[i] < mang2[j]) {
			mangS[i+j] = mang1[i];
			i++;
		}
		else {
			mangS[i+j] = mang2[j];
			j++;
		}
	}

	cout << n1 << endl << n2 << endl;

	if (i>=n1) {
		for (j; j<n2; j++)
			mangS[i+j] = mang2[j];
	}
	else {
		for (i; i<n1; i++)
			mangS[i+j] = mang1[i];
	}

	for (int k=0; k<i+j; k++) {
		cout << mangS[k] << " ";
	}
}

int main()
{
//	int mang1[] = {6,3,1,4,1,42,72,332,13,89,56,8,5,32,4,6,17,34,89,657,72,14,56,3,4,6,15,23};
//	int mang2[] = {1,5,7,3,452,67,23,546,782,3,45,7,83,45};

	int mang1[] = {1,4,6,7,8,9,23,56};
	int mang2[] = {2,3,3,6,7,8,9};

	int n1 = sizeof(mang1)/sizeof(int);
	int n2 = sizeof(mang2)/sizeof(int);

	mergeSort(mang1, n1, mang2, n2);
	return 0;
}