#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void check_size(float Xo,float Yo,float R, float Xm, float Ym)
{
	float size;
	size = sqrt(pow((Xo-Xm), 2) + pow((Yo-Ym), 2));
//	printf("%f",size);
	if (size < R)
		printf("inside\n");
	else if (size == R)
		printf("on line");
	else
		printf("outside");	
}

int main() {
	float Xo, Yo, Xm, Ym, R;
	printf("O: ");
	scanf("%f %f", &Xo, &Yo);
	printf("R: ");
	scanf("%f", &R);
	printf("M: ");
	scanf("%f %f", &Xm, &Ym);
	check_size(Xo,Yo,R,Xm,Ym);
}
