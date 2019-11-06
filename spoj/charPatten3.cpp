#include <iostream>

using namespace std;

int main()
{
	int t, l, c;
	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> l >> c;
		for (int j=0; j<=l; j++) {
			for (int k=0; k<c*3+1; k++)
				cout << '*';
			cout << endl;
			if (j == l)
				break;
			for (int p=0; p<2; p++) {
				for (int n=0; n<=c; n++) {
					if (n == c)
						cout << '*';
					else 
						cout << "*..";
				}
				cout << endl;
			}
			
		}
	}
	return 0;
}
