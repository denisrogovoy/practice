// ConsoleApplicationLab2.3.19(5).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) 
{

	int n;
	cout << "Enter a positive number>1: ";
	cin >> n;

	if (n <= 1)
		cout << "Your number<= 1";
	else
		if (n > 20)
			cout << "Sorry, the number is too big";
		else
		{
			cout << '+';

			for (int i = 0; i < n; i++)
				cout << '-';

			cout << '+' << endl;

			for (int i = 0; i < n; i++) 
			{
				cout << '|';
				for (int j = 0; j < n; j++)
					cout << ' ';
				cout << '|' << endl;
			}

			cout << '+';

			for (int i = 0; i < n; i++)
				cout << '-';

			cout << '+' << endl;
		}
	return 0;
}