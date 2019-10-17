#include <iostream>
#include <typeinfo>
#include <cstdint>

using namespace std;

void find_letter(char a, int size, char array[])
{
	for (int i=0; i<size; i++) {
		if (a == array[i]) {
			cout << "found\n";
			break;
		}
		else if (i == (size-1))
			cout << 404;
	}
}
int main()
{
	char ch_array[] = { 'L', 'e', 'T', 'r', 'a', 'n', 'D', 'a', 't', '\n' };
	int size = sizeof(ch_array);
	char d = '\n';
	find_letter(d, size, ch_array);
	return 0;
}
