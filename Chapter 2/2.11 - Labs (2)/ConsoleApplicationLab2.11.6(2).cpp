// ConsoleApplicationLab2.11.6(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct Time
{
	int hours;
	int minutes;
};

int main(void) 
{
	Time startT, endT, betweenT;
	cout << "start time: " << endl;
	cin >> startT.hours >> startT.minutes;
	if (startT.hours >= 24 || startT.minutes > 60) 
	{
		cout << "Start time is wrong" << endl;
		return 0;
	}
	cout << "end time: " << endl;
	cin >> endT.hours >> endT.minutes;
	if (endT.hours >= 24 || endT.minutes > 60 || endT.hours < startT.hours) 
	{
		cout << "End time is wrong" << endl;
		return 0;
	}
	betweenT.hours = endT.hours - startT.hours;
	if (endT.minutes >= startT.minutes)
		betweenT.minutes = endT.minutes - startT.minutes;
	else {
		betweenT.hours--;
		betweenT.minutes = endT.minutes + 60 - startT.minutes;
	}
	cout << endl << betweenT.hours << ":" << betweenT.minutes << endl;
	return 0;
}

