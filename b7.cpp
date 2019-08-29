#include <iostream>
#include <math.h>

using namespace std;

void pt_bac2(double a, double b, double c)
{
	double x;
	double delta = pow(b, 2) - 4*a*c;
	if (delta < 0)
		cout << "vo nghiem";
	else if (delta == 0) {
		x = -b/(2*a);
		cout << "nghiem: " << x << endl;
	}
	else {
		double x1 = (-b - sqrt(delta)) / (2*a);
		double x2 = (-b + sqrt(delta)) / (2*a);
				cout << "nghiem: " << x1 << " va " << x2 << endl;			
	}
}

int chk_a(double a)
{
	if (a == 0) {
		do {
			cout << "a=0, nhap lai: ";
			cin >> a;
		} while (a == 0);
	}
	return a;
}

int main()
{
	double a, b, c;
	cout << "input a, b, c: ";
	cin >> a >> b >> c;
	a = chk_a(a);
	pt_bac2(a, b, c);
}
