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

void liet_ke(int N)
{
	if (N>2)
		cout << 2 << " ";
	for (int i=3; i<=N; i++)
		if (chk_nguyento(i) == 1)
			cout << i << " ";
}

int main()
{
	int N;
	cin >> N;
	liet_ke(N);
}
