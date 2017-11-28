// ConsoleApplicationLab2.3.19(8).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cout << "Please input: ";
	cin >> n;

	long long fact = 1;
	if (n == 0)
		fact = 1;
	else {
		for (int i = 1; i <= n; i++)
		{
			fact *= i;
		}
	}
	cout << fact;
	return 0;
}

