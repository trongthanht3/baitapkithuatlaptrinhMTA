#include <iostream>
#include <conio.h>

using namespace std;

void find_USCLN(int a, int b)
{
	char t;
	while (a != b) {
		if (a > b)
			a = a - b;
		else if (a < b)
			b = b - a;
	}
	cout << "uscln: " << a << endl;
	cout << "Press any key to continue. Esc to escape\n";
}
	
int main()
{
	int a, b;
	char t;
	cout << "input: ";
	do {
		cin >> a >> b;
		find_USCLN(a, b);
	} while((t = getch()) != 27);
}
