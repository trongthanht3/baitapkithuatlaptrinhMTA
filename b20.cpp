#include <iostream>

using namespace std;

void sum_time(int gio1, int phut1, int giay1, int gio2, int phut2, int giay2)
{
	int h=0,
		m=0, 
		s=0;
	m = (giay1+giay2) / 60;
	s = (giay1+giay2) % 60;
	h = (phut1+phut2) / 60;
	m = m + (phut1+phut2) % 60;
	h = h + (gio1+gio2);
	cout << h << "h" << m << "m" << s << "s" << endl;
}

int main()
{
	int gio1, phut1, giay1;
	int	gio2, phut2, giay2;
	
	cout << "nhap gio, phut, giay (1): ";
	cin >> gio1 >> phut1 >> giay1;
	cout << "nhap gio, phut, giay (2): ";
	cin >> gio2 >> phut2 >> giay2;
	sum_time(gio1, phut1, giay1, gio2, phut2, giay2);
	return 0;
}
