#include <iostream>
#include <math.h>

using namespace std;

bool chk_nguyento(int i)
{
	int chk=0;
	double k = sqrt(i);
	for (int j=2; j<=k; j++) 
		if (i%j == 0) 
			chk++;
	if (chk != 0)
		return 0;
	else
		return 1;
}

void tim_so(int n)
{
	for (int i=2; i<n; i++) {
		if (chk_nguyento(i) == 1) {
			if (chk_nguyento(n-i) == 1) {
				cout << i << " " << n-i;
				break;
			}
		}
	}

}

int main()
{
	int n;
	cin >> n;
	tim_so(n);
	return 0;
}
