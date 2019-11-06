#include <iostream>

using namespace std;

int main()
{
	int t, l, c, h, w, s;
	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> l >> c >> s;
		h = w = s;
		for (int j=0; j<=l; j++) {
			for (int k=0; k<c*(w+1)+1; k++)
				cout << '*';
			cout << endl;
			if (j == l)
				break;
			for (int p=1; p<=h; p++) {
				for (int n=0; n<=c; n++) {
					cout << '*';
					if (n == c)
						break;
					for (int v=1; v<=w; v++) {
						if (j%2 == 0) {
							if (n%2 == 0) {
								if (v == p)
									cout << '\\';
								else
									cout << '.';
							}
							else {
								if (v == h-p+1)
									cout << '/';
								else
									cout << '.';
							}
						}
						else {
							if (n%2 == 1) {
								if (v == p)
									cout << '\\';
								else
									cout << '.';
							}
							else {
								if (v == h-p+1)
									cout << '/';
								else
									cout << '.';
							}
						}
					}
				}
				cout << endl;
			}
			
		}
	}
	return 0;
}
