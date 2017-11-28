// ConsoleApplicationLab2.3.19(6).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {

	int c;
	cout << "Input height (2 < c < 9): ";
	cin >> c;
	cout << endl;

	int a = 48;
	int c1 = a / 6;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == c - 1)
			{
				if (j < c1 + c && j > c1 - c || j < c1 + c + 16 && j > c1 - c + 16 || j < c1 + c + 32 && j > c1 - c + 32)
					cout << "*";
				else 
					cout << " ";
			}
			else 
				if (j == c1 - i || j == c1 + i || j == c1 - i + 16 || j == c1 + i + 16 || j == c1 - i + 32 || j == c1 + i + 32) cout << "*";
			else 
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}