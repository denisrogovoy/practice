// ConsoleApplicationLab3.6.3(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void increment(int &value, int valueOfIncrement = 1)
{
	value += valueOfIncrement;
}

int main(void)
{
	int a = 0;
	for (int i = 0; i < 10; i++)
		if (i % 2)
			increment(a);
		else
			increment(a, i);
	cout << a << endl;
	return 0;
}
