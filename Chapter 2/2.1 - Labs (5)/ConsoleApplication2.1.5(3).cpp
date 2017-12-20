// ConsoleApplication2.1.5(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sys;
	double meter, feet, inches;

	cout << "Choose system (0 - metric, 1 - imperial) : ";
	cin >> sys;

	if (sys == 1)
	{
		cout << "Input feet: ";
		cin >> feet;
		cout << "Input inches: ";
		cin >> inches;
		cout << "In meters: " << feet * 0.3048 + inches * 0.0254 << "m" << endl;
	}
	else
	{
		if (sys == 0)
		{
			cout << "Input meters: ";
			cin >> meter;
			int feet = meter / 0.0254 / 12;
			cout << "In feet and inches: " << feet << "'" << meter / 0.0254 - feet * 12 << "\"" << endl;
		}
		else cout << "Error!";
	}
	return 0;
}

