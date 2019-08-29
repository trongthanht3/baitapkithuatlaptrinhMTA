#include <iostream>
#include <math.h>

using namespace std;

void kt_chinhphuong(int a, int b);

void find_num()
{
	int n, i = 1;
	for(i; i<=100; i++) {
		n = i + 1;
		for (n; n<=100; n++) {
			kt_chinhphuong(i, n);
		}
	}
}

void kt_chinhphuong(int a, int b)
{
	double P = pow(a, 2) + pow(b, 2);
	double K = sqrt(P);
	if (pow(K, 2) == pow(int(K), 2))
		cout << a << " " << b << endl;
}

int main()
{
	int i, n;	
	find_num();
	return 0;
}
