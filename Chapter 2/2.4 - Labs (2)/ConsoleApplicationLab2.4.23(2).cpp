// ConsoleApplicationLab2.4.23(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void)
{
	unsigned short int val;
	bool ispalindrome = false;
	cout << "value = ";
	cin >> val;

	int counter = 15;
	unsigned short a = 1, b = 1;

	for (int i = 0; i < counter; i++)
	{
		a = a << i;
		b = b << counter;
		if (((val & a) && (val & b)) || (!(val & a) && !(val & b)))
		{
			a = 1;
			b = 1;
			counter--;
		}
		else
		{
			ispalindrome = false;
			break;
		}
	}

	if (ispalindrome)
		cout << val << " is a bitwise palindrome" << endl;
	else
		cout << val << " is not a bitwise palindrome" << endl;
	return 0;
}