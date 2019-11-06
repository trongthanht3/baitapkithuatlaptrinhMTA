#include <iostream>
#include <math.h>
using namespace std;

int divisorSum(int a)
{
	if (a == 1)
		return 0;
	int sum=0;
	double k = sqrt(a);
	for (int i=2; i<=k; i++) {
		if (i*i == a) {
			sum = sum+i;
		}
		else if (a%i == 0) {
			sum = sum + i + a/i;
		}
	}
	return sum+1;
}

int main()
{
	int t, A;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> A;
		cout << divisorSum(A);
		cout << endl;
	}
	return 0;
}
