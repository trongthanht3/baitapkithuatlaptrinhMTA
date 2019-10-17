#include <iostream>

using namespace std;

void dem_ki_tu(string chuoi)
{
	int length = chuoi.length();
	int chu = 0;
	int so = 0;
	for (int i=0; i<length; i++)
		if (int(chuoi[i]) >= 48 && int(chuoi[i]) <= 57)
			so++;
		else if((int(chuoi[i]) >= 65 && int(chuoi[i]) <= 90) || (int(chuoi[i]) >= 97 && int(chuoi[i]) <= 122))
			chu++;
	cout << "chu: " << chu << "\t so: " << so;
}

int main()
{
	string chuoi;
	getline(cin, chuoi);
	dem_ki_tu(chuoi);
	return 0;
}
