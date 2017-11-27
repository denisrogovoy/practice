// ConsoleApplication2.3.19(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {
	double pi4 = 0.;
	long n;
	cout << "Number of iterations? ";
	cin >> n;

	int a = 1;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			pi4 += 1. / a;
		else
			pi4 -= 1. / a;
		a += 2;
	}

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	return 0;
}

