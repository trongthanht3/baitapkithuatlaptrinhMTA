#include <iostream>
#include <fstream>
using namespace std;

//gendata
int main()
{
	fstream dataIn;
	dataIn.open("input.txt", ios::out);
	fstream dataOut;
	dataOut.open("output.txt", ios::out);
	
	dataIn.close();
	dataOut.close();
	return 0;
}
