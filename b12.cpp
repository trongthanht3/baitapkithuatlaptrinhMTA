#include <iostream>

using namespace std;

void tim_trau(int trau, int co)
{
	int tong_trau, tong_co;
	int chk = 0;
	int trau_dung, trau_nam, trau_gia;
	for (trau_gia=3; (trau_gia<trau) && (chk == 0); trau_gia=trau_gia+3) {
		for (trau_dung=1; trau_dung<(trau-trau_gia) && chk == 0; trau_dung++) {
			for (trau_nam=1; trau_nam<=(trau-trau_gia-trau_dung) && chk == 0; trau_nam++) {
				tong_trau = trau_gia + trau_dung + trau_nam;
				tong_co = trau_dung*5 + trau_nam*3 + trau_gia/3;
				if (tong_trau == trau && tong_co == co) {
					chk = 1;
				}
				if(chk == 1)
					break;
			}
			if(chk == 1)
					break;
		}
		if(chk == 1)
			break;
	}

	cout << trau_dung << " " << trau_nam << " " << trau_gia << endl;
	cout << tong_trau << " " << tong_co << endl;
}

int main()
{
	tim_trau(100,100);
	return 0;
}
