#include <iostream>

using namespace std;

void in_bang_cuu_chuong()
{
	for (int i=1; i<=9; i++) {
		for (int j=2; j<=9; j++) {
			cout << j << " x " << i << " = " << j*i << "\t";
		}
		cout << endl;
	}
}

int main()
{
	in_bang_cuu_chuong();
}
