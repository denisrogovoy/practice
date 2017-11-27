// ConsoleApplicationLab2.3.19(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a;
	unsigned long long b = 1;
	cout << "Input a value of power(0-63): ";
	cin >> a;

	if (a <= 63 && a >= 0)
	{
		for (int i = 1; i <= a; i++)
		{
			b *= 2;
		}
	}
	else cout << "Inputed error value!";

	cout << b << endl;
	return 0;
}

