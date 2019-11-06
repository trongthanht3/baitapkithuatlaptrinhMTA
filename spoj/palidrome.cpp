#include <iostream>

using namespace std;

int checkPalidrome(int a)
{
	int goc = a;
	int doi = 0;
	while(goc > 0) {
		doi = doi*10 + goc%10;
		goc = goc/10;
	}
	if (doi == a)
		return 1;
	else
		return 0;
}

int main()
{
	int t, K;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> K;
		K++;
		while(checkPalidrome(K) == 0) {
			K++;
		}
		cout << K;
		cout << endl;
	}
	return 0;
}
