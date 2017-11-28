// ConsoleApplicationLab2.3.19(9).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	if (number % 2 == 1)
	{
		cout << number*number + 2 - 2 * number;
	}
	return 0;
}
