// ConsoleApplicationLab1.7.3(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	float a, b, c, d, e;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	cout << "Input d: ";
	cin >> d;
	cout << "Input e: ";
	cin >> e;

	cout << setprecision(2) << a << "\n";
	cout << fixed << setprecision(2) << b << "\n";
	cout << fixed << setprecision(6) << c << "\n";
	cout << fixed << setprecision(2) << d << "\n";
	cout << fixed << setprecision(0) << e << "\n";

	return 0;
}

