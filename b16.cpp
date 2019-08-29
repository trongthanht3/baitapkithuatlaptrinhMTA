#include <iostream>
#include <math.h>

using namespace std;
//16: In ra các cách d? có 300000d v?i các t? ti?n m?nh giá 1000, 2000, 5000, 10000, 20000.

void dem_tien()				//dua tren bai tim trau
{
	for (int k1=1; k1<300; k1++)
		for (int k2=1; k2<(300-k1); k2++)
			for (int k5=1; k5<(300-k2*2-k1); k5++)
				for (int k10=1; k10<(300-k10*10-k2*2-k1); k10++)
					for (int k20=1; k20<=(300-k20*20-k10*10-k2*2-k1); k20++)
						if ((k20*20 + k10*10 + k5*5 + k2*2 + k1) == 300)
							cout << k1 << " " << k2 << " " << k5 << " " << k10 << " " << k20 << endl;
}

int main()
{
	dem_tien();
	return 0;
}
