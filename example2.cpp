#include <iostream>
#include <math.h>

using namespace std;

void tim_uoc1(int N)		// tim uoc voi thoi gian dai hon
{
	int num=0;
	for (int i=1; i<=N; i++) {
		if (N%i == 0) {
			cout << i << " ";
			num++;
		}
	}
	cout << num << endl;
}

int main()
{
	int n;
	cin >> n;
	tim_uoc1(n);
	return 0;
}
