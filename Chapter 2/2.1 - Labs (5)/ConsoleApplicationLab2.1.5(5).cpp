// ConsoleApplicationLab2.1.5(5).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int year;
	cin >> year;

	int a = year % 19;
	int b = year % 4;
	int c = year % 7;

	int d = (a * 19 + 24) % 30;
	int e = (2 * b + 4 * c + 6 * d + 5) % 7;
	if (d + e <= 10)
	{

		cout << "March " << (d + e + 22);
	}
	else
	{
		cout << "April " << (d + e - 9);
	}
	return 0;
}

