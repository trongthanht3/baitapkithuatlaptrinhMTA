#include <iostream>

using namespace std;

int main()
{
	int t, l, c, w, h;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> l >> c >> h >> w;
		for (int j=0; j<=l; j++) {
			for (int k=1; k<=h; k++) {
				for (int p=0; p<=c; p++) {
					for (int q=1; q<=w; q++) {
						cout << '.';
					}
					if (p == c)
						break;
					cout << '|';
				}
				cout << endl;
			}
			if (j == l)
				break;
			for (int p=0; p<=c; p++) {
				for (int q=1; q<=w; q++) {
					cout << '-';
				}
				if (p == c)
					break;
				cout << '+';
			}
			cout << endl;
		}
	}
	return 0;
}
