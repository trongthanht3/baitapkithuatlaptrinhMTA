#include <iostream>
#include <math.h>

using namespace std;

bool chk_prime(int a)
{
	if (a == 1)
		return false;
	else if (a == 2)
		return true;

	double k = sqrt(a);
	bool chk = true;
	for (int i=2; i<=k; i++) {
		if (a%i == 0)
			return false;
	}
	return chk;
}

int main()
{
	int t;
	cin >> t;
	for (int i=0; i<t; i++){
		int m, n;
		cin >> m;
		cin >> n;
		for (int j=m; j<=n; j++) {
			if (chk_prime(j) == true)
				cout << j << endl;
		}
		cout << endl;
	}
	return 0;
}
