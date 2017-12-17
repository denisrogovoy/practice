// ConsoleApplicationLab1.7.5(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;
	do {
		cout << "Input first octet: ";
		cin >> a;
	} while (a < 0 || a>255);
	do {
		cout << "Input second octet: ";
		cin >> b;
	} while (b < 0 || b>255);

	do {
		cout << "Input third octet: ";
		cin >> c;
	} while (c < 0 || c>255);

	do {
		cout << "Input fourth octet: ";
		cin >> d;
	} while (d < 0 || d>255);

	cout << a << "." << b << "." << c << "." << d;
	return 0;
}

