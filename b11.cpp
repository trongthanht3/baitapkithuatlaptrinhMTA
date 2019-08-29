#include <iostream>

using namespace std;

void tim_gc(int ga, int cho)
{
	int i;
	for (i=1; i<=36; i++) {
		int A = (ga*i + cho*(36-i));
		if (A == 100) {
			cout << i << " " << 36-i << endl;
			break;
		}
	}
}

int main()
{
	tim_gc(2, 4);
	return 0;
}
