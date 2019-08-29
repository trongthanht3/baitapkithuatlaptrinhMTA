#include <iostream>
#include <math.h>

using namespace std;

int _2_so_cuoi(int n, int m)
{
	int k = pow(n,m);  // su dung double hoac cac type lon hon voi so lon hon
	return (k % 100);
}

int main()
{
	int n, m;
	cin >> n >> m;
	if (_2_so_cuoi(n,m) < 10)
		cout << "0" << _2_so_cuoi(n,m);
	else
		cout << _2_so_cuoi(n,m);
	return 0;
}
