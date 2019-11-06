#include <iostream>

using namespace std;

int Answer;

int main()
{
	int T, test_case;
	
	freopen("clubInput.txt", "r", stdin);
	
	cin >> T;
	
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}
	
	return 0;
}
