// ConsoleApplicationLab3.4.7(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

bool isLeap(int year)
{
	return year % 4 == 0;
}

int monthLength(int year, int month)
{
	int dayCount;
	if (month == 2 && isLeap(year))
		dayCount = 29;
	else if (month == 2 && !isLeap(year))
		dayCount = 28;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		dayCount = 30;
	else
		dayCount = 31;
	return dayCount;
}

int dayOfYear(Date date)
{
	int dayNumber = 0;
	for (int i = 1; i <= date.month - 1; i++)
		dayNumber += monthLength(date.year, i);
	dayNumber += date.day;
	return dayNumber;
}

int main(void)
{
	Date d;
	cout << "Enter year month day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}
