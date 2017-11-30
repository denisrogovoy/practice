// ConsoleApplicationLab2.4.23(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	unsigned long number;
	cin >> number;
	int count = 0;

	while (number != 0)
	{
		if (number & 1 == 1)
			count++;
		number = number >> 1;
	}
	cout << count;
	return 0;
}

