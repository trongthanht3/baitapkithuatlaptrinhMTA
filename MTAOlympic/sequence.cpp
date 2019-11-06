#include <iostream>

using namespace std;

void bubleSort(int mang[], int n)
{
	for (int i=0; i<n; i++) {
		for (int j=n-1; j>0; j--) {
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
	int T, N, K=6;
	int a[] = {1,2,3,-3,-2,-1};
	bubleSort(a, K);
//	cin >> T;
//	for (int i=0; i<T; i++) {
//		cin >> N;
//		cin >> K;
//		
//	}
	return 0;
}
