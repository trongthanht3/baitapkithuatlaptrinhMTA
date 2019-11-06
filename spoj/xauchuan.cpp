#include <iostream>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
//	string s = "       truong      dai    hoc             ";
	int len = s.length();
	int *plen = &len;
	char s2[*plen];
	int i=0, j=0;
	// pre exe
	while (s[i] == ' ') {
		i++;
	}
	
	//exe
	while (s[i]) {
		if (s[i] != ' ') {
			s2[j] = s[i];
			i++;
			j++;
		}
		else {
			if (s[i] == ' ' && s[i+1] == ' ') {
				s2[j] = ' ';
				j++;
				while (s[i] == ' ') {
					i++;
				}
			}
			else {
				s2[j] = s[i];
				i++;
				j++;
			}
		}
	}
	
	//after
	s2[j-1] = '\0';

//	cout << s << endl;
	cout << s2 << endl;
	return 0;
};
