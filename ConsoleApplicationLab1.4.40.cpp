// ConsoleApplicationLab1.4.40.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void) {
	float pi = 3.14159265359;
	float x, y;
	cout << "Enter value for x: ";
	cin >> x;
	// put your code here


	float a, b;
	a = (x*x) / ((pi*pi)*(x*x + 1. / 2.));
	b = 1 + ((x*x) / ((pi*pi)*((x*x - 1. / 2.)*(x*x - 1. / 2.))));
	y = a*b;
	cout << "y = " << y;
	return 0;
}

