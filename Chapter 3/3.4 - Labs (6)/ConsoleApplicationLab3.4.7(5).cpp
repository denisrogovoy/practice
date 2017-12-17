// ConsoleApplicationLab3.4.7(5).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

Date today(void)
{
	time_t timeInSec = time(NULL);
	tm convertedTime = *localtime(&timeInSec);
	Date date = { convertedTime.tm_year + 1900, convertedTime.tm_mon + 1, convertedTime.tm_mday };
	return date;
}

int main(void) 
{
	Date todaysDate = today();
	cout << todaysDate.year << "-" << todaysDate.month << "-" << todaysDate.day << endl;
	return 0;
}

