// ConsoleApplication2.1.5(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	int month;
	int day;
	cin >> year;
	cin >> month;
	cin >> day;

	int yearBuffer = year;
	int monthBuffer = month;
	int dayBuffer = day;

	month -= 2;
	if (month <= 0)
	{
		month += 12;
		year--;
	}
	month = month * 83 / 32.;
	month += day;
	month += year;
	month += year / 4;
	month -= year / 100;
	month += year / 400;
	int a = month % 7;
	cout << a;

	return 0;
}

