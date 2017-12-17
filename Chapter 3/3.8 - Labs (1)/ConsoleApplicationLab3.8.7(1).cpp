// ConsoleApplicationLab3.8.7(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

void increment(int &value, int incrementValue = 1)
{
	value += incrementValue;
}

void increment(float &value, int valueOfIncrement = 1)
{
	value += valueOfIncrement;
}

int main(void)
{
	int a = 0;
	float b = 1.5;
	for (int i = 0; i < 10; i++)
		if (i % 2)
		{
			increment(a);
			increment(b, sqrt(a));
		}
		else
		{
			increment(a, i);
			increment(b);
		}
	cout << a * b << endl;
	return 0;
}
