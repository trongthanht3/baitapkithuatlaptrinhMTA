#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;
	s2.clear();
	getline(cin, s);
	cout << s;
	int j=0;
	int i=0;
	while (s[i]) {
		if (s[i] != ' ') {
			s2[j] = s[i];
			j++;
		}
		i++;
	}
	s2[j] = '\0';
	cout << s2;
	return 0;
}
