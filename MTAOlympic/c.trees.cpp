#include <iostream>

using namespace std;

int cayCatItNhat(int a[], int n)
{
	int temp_min = a[0];
	for (int i=0; i<n; i++) {
		if (temp_min > a[i])
			temp_min = a[i];
	}
	return temp_min;
}

int main()
{
	int K, N;
	int *pN = &N;
	cin >> K;
	for (int i=0; i<K; i++) {
		cin >> N;	int a[*pN];
		for (int j=0; j<N; j++)
			cin >> a[j];
		cout << cayCatItNhat(a, N);
		
		cout << endl;
	}
}
