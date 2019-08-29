#include <iostream>

using namespace std;

struct songuyen 
{
	int n;
	int tong;
	int so_cs;
};

songuyen tong_chu_so(songuyen A)
{
	A.tong = 0;
	A.so_cs = 0;
	do {
		A.tong = A.tong + A.n%10;
		A.n = A.n/10;
		A.so_cs++;
	} while (A.n>0);
	return A;
}

void output(songuyen A)
{
	cout << "tong: " << A.tong << endl;
	cout << "so chu so: " << A.so_cs << endl;
}

int main()
{
	songuyen A;
	cin >> A.n;
	A = tong_chu_so(A);
	output(A);
	return 0;
}
