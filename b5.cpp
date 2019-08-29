#include <iostream>
#include <conio.h>

using namespace std;

void kt_doixung(int a)
{
	int goc = a;
	int doi = 0;
	while(goc > 0) {
		doi = doi*10 + goc%10;
		goc = goc/10;
	}
	if (doi == a)
		cout << "doi xung" << endl;
	else
		cout << "khong doi" << endl;
}

int main()
{	
	int a;
	char chk;
	do {
		cin >> a;
		kt_doixung(a);
		cout << "Press any key to continue. Esc to escape\n";
		chk = getch();
	} while (chk != 27);
	return 0;
}
