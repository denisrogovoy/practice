// ConsoleApplicationLab2.3.19(4).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {

	int a;
	double num = 1;
	cout << "Input number of power: ";
	cin >> a;

	for (int i = 1; i <= a; i++) 
	{
		num /= 2;
	}

	cout.precision(20);
	cout << num;
	return 0;
}

