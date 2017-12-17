// ConsoleApplicationLab4.2.5(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include  <iostream>

using namespace std;

int main(void) 
{
	int a;
	double result = 0;
	do 
	{
		cout << "Enter N(1 - 100 000): ";
		cin >> a;
	} while (a < 1 || a > 100000);
	for (int i = 1; i <= a; i++) 
		result += i;
	cout.precision(0);
	cout << fixed << result << endl;
	return 0;
}
