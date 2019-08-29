#include <iostream>
#include <math.h>

using namespace std;

/*void tim_uoc1(int N)		// tim uoc voi thoi gian dai hon
{
	int num=0;
	for (int i=1; i<=N; i++) {
		if (N%i == 0) {
			cout << i << " ";
			num++;
		}
	}
	cout << num << endl;
}*/

int tong_uoc(int N)
{
	double k = sqrt(N);
	int num  = 0,			// dem so uoc
		tong = 0;			// tong uoc
		
	for (int i=1; i<=k; i++) {
		if (N%i == 0) {
		//	cout << i << " " << N/i << " "; // in ra uoc de kiem tra
			num+=2;
			tong = tong + i + N/i;
		}
	}
	tong = tong - N;		// tru di 1 lan N la uoc cua chinh no
	if (k == int(k)) {		// neu N la so chinh phuong --> 2 lan uoc la sqrt(N) duoc cong
		tong = tong - k;	
		num--;
	}
//	cout << num << endl;	// in ra so uoc
	return tong;
}

void so_amstrong(int N)
{
	for (int i=1; i<=N; i++)
		if (i == tong_uoc(i))
			cout << i << " ";
}

int main()
{
	int N;
	cin >> N;
	so_amstrong(N);
}
