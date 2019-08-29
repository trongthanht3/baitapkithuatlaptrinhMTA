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

int phan_tich(int N)
{
	double k = sqrt(N);
	int chk = 0;
	for (int i=2; i<=k; i++) {
		if (N%i == 0) {
			cout << i << " ";
			if (chk_nguyento(N/i) == 1)
				cout << N/i;
			else
				phan_tich(N/i);			//de quy ham de tiep tuc phan tich phan chua nguyen to
			chk = 1;
		}
		if (chk == 1)
			break;
	}
}

int main()
{
	int N;
	cin >> N;
	phan_tich(N);
	return 0;
}
