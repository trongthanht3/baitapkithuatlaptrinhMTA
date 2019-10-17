#include <iostream>

using namespace std;

void bubleSort(int mang[], int n)
{
	for (int i=0; i<n; i++) {
		for (int j=n; j>0; j--) {
			if (mang[j] < mang[j-1]) {
				int temp = mang[j-1];
				mang[j-1] = mang[j];
				mang [j] = temp;
			}
		}
	}
	
	for (int i=0; i<n; i++)
		cout << mang[i] << " ";
}

int main()
{
	int mang[] = {2,4,5,1,2,7,3,734,78,32,35,68,1,0,54,5,8,20,13,44,67,34,7,9,10};
	int mang2[] = {6,1,5,9,2,3};
	int n = sizeof(mang)/sizeof(int);
	
	bubleSort(mang, n);
	return 0;
}
