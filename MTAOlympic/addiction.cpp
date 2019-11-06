#include <iostream>
#include <string>

using namespace std;

bool chk_binary(int a)
{
	string s = to_string(a);
	int length = s.length();
	cout << s.length() << endl;
	for (int i=0; i<length; i++) {
		cout << s[i];
		if (s[i]!='0' && s[i]!='1')
			return false;
	}
	return true;
}

int make_nice(int a)
{
	
}

int main()
{
	int n, k;
	int binary[100];
	
	cin >> k >> n;
	
	for (int i=0; i<k; i++) {
		for (int j=0; j<n; j++) {
			cin >> binary[j];
		}
		for (int p=0; p<n-1; p++) {
			int sum = binary[p] + binary[p+1];
			if (chk_binary(sum) == false) {
				if (binary[p] <= binary[p+1])
					binary[p+1]
			}
		}	
	}
	
	return 0;
}
