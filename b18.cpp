#include <iostream>
#include <math.h>

using namespace std;

void tim_xyz(int N)
{
	int x=0,
		y=0,
		z=0;
	for (x=0; x<N; x++) {
		for (y=0; y<N; y++) {
			for (z=0; z<N; z++) {
				if ((pow(x,2) + pow(y,2)) == pow(z,2)) {
				//	cout << pow(x,2) << " + " << pow(y,2) << " = " << pow(z,2) << endl;
					cout << x << " " << y << " " << z << endl;
					cout << -x << " " << -y << " " << -z << endl;
				}
			}
		}
	}
					

}

int main()
{
	tim_xyz(100);
	return 0;
}
