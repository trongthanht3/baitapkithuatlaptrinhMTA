#include <iostream>
#include <math.h>

using namespace std;

int so_happy(int a)
{
	int doi  = 0,
		doi2 = 0,
		goc  = a;
	for (int i=1; i<=3; i++) {
		doi = doi + goc%10;
		goc = goc/10;
	}
	for (int i=1; i<=3; i++) {
		doi2 = doi2 + goc%10;
		goc = goc/10;
	}
	if (doi == doi2) {
		return a;
	}
	else 
		return 0;
}

void output()
{
	int goc;
	for (goc=1; goc <1000000; goc++) {
		if (so_happy(goc) > 0)
			cout << so_happy(goc) << endl;
	}
}

int main()
{
	output();
}
