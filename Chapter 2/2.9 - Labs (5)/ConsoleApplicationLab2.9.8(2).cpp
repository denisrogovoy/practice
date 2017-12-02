// ConsoleApplicationLab2.9.8(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cout << "Input number: ";
	cin >> num;
	int arr[5] = { 50, 20, 10, 5, 1 };

	while (num != 0)
	{
		if (num >= 50)
		{
			num -= arr[0];
			cout << arr[0] << " ";
		}
		else
			if (num >= 20)
			{
				num -= arr[1];
				cout << arr[1] << " ";
			}
			else
				if (num >= 10)
				{
					num -= arr[2];
					cout << arr[2] << " ";
				}
				else
					if (num >= 5)
					{
						num -= arr[3];
						cout << arr[3] << " ";
					}
					else
					{
						num -= arr[4];
						cout << arr[4] << " ";
					}
	}
	cout << endl;
	return 0;
}