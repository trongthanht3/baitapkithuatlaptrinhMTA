#include <iostream>
#include <math.h>

using namespace std;

void timso(int a)
{
	int S = 0;
	int goc = a;
	while (goc > 0) {
		S = S + pow(goc%10, 3);
		goc = goc/10;
	}
	if (S == a)
		cout << S << endl;
}

int main()
{
	for (int i=100; i<=1000; i++) {
		timso(i);
	}
}
