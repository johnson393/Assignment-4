#include <iostream>
#include "math.h"

using namespace std;



int main()		
{
	string name = "John";

	for (int i =0; i < name.length (); i++)
	{
		cout << name[i] << endl;
		}

			name.append(" Tyler Johnson");
			
			cout << name;


	int n1 = 0, n2 = 0;

	cin >> n1;
	cin >> n2;

	cout << Add(n1,n2);

	Add(1, 2);

	return 0;
}

