// ConsoleApplicationLab1.7.4(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	float result;
	result = abs((1.0 / (float)a) - (1.0 / (float)b));
	if (result < 0.000001)
	{
		cout << "Results are equal(by 0.000001 epsilon)";
	}
	else
	{

		cout << "Results are not equal(by 0.000001 epsilon)";
	}


	return 0;
}

