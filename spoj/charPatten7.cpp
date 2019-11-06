#include <iostream>

using namespace std;

int main()
{
	int t, l, c, h, w, s;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> l >> c >> s;
		h = w = s;
		for (int j=1; j<=l; j++) {
			for (int k=1; k<=h*2; k++) {
				for (int p=1; p<=c; p++) {
					if (p%2 == 1) {
						for (int q=1; q<=w; q++) {
							if (q == w-q+1) {
								cout << '/';
							}
							else 
								cout << '.';
						}
					}
					else {
						for (int q=1; q<=w; q++) {
							if 
						}
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}
