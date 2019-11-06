#include <iostream>
#include <fstream>

using namespace std;

float fatorial(int a)
{
	float s=1;
	if (a>1)
		return a*fatorial(a-1);
	else
		return a;
}

int main()
{
	cout << fatorial(5);
	return 0;
}
