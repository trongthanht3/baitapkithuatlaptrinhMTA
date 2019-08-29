#include <iostream>
#include <string>

using namespace std;

int dem_tu(string chuoi)
{
	int length = chuoi.length();
	int tu = 1;
	for (int i=0; i<length; i++)
		if (chuoi[i] == ' ')
			tu++;
	return tu;
}

int main()
{
	string chuoi;
	getline(cin, chuoi);
	cout << "so tu: " << dem_tu(chuoi);
	return 0;
}
