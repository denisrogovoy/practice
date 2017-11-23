// ConsoleApplicationLab2.3.19(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int c0;
	int step = 0;
	do {
		cin >> c0;
	} while (c0 <= 0);
	while (c0 != 1)
	{

		if (c0 % 2 == 0)
		{
			c0 = c0 / 2;
		}
		else
		{
			c0 = 3 * c0 + 1;
		}
		cout << c0<<endl;
		step++;
	}
	//cout << c0 << endl;
	cout << "Step count " << step << endl;
	return 0;
	}

