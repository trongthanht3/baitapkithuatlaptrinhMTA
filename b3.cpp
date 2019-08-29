#include <iostream>

using namespace std;

void in_ASCII()
{
	for (int i=0; i<256; i++) {
		cout << char(i) << " ";
	}
}

int main()
{
	in_ASCII();
}
