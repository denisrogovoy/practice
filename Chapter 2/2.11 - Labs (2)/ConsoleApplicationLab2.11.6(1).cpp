// ConsoleApplicationLab2.11.6(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Time {
	int hours;
	int mins;
};

int main(void)
{
	struct Time time;
	int n;
	cout << "Input hours: ";
	cin >> time.hours;
	cout << "Input minutes: ";
	cin >> time.mins;
	if (time.hours >= 24 || time.mins > 60)
	{
		cout << "Your input is wrong" << endl;
	}
	else
	{
		cout << "Input number: ";
		cin >> n;
		time.hours += (n + time.mins) / 60;
		time.hours %= 24;
		time.mins = (n + time.mins) % 60;
		cout << time.hours << ":" << time.mins << endl;
	}
	return 0;
}
