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

void liet_ke(int m)
{
	int chk = 0;
	int i = 1;
	while (chk != m) {
		i++;
		if (chk_nguyento(i) == 1) {
			chk++;
			cout << i << " ";
		}
	}
}

int main()
{
	int m;
	cin >> m;
	liet_ke(m);
	return 0;
}
