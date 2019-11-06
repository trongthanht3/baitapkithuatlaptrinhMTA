#include <iostream>

using namespace std;

int main()
{
	int t, l, c;
	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> l >> c;
		for (int j=1; j<=l; j++) {
			if (j == 1 || j == l) {
				for (int k=0; k<c; k++){
					cout << '*';
				}
				cout << endl;
			}
			else {
				for (int k=1; k<=c; k++) {
					if (k == 1 || k == c)
						cout << '*';
					else
						cout << '.';
				}
				cout << endl;
			}
		}
	}
	return 0;
}
