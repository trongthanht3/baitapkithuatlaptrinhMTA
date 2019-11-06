#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	string k;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> k;
		int half = k.length()/2;
		for (int j=0; j<half; j++) {
			if(j%2 == 0)
				cout << k[j];
		}
		cout << endl;
	}
}
