// ConsoleApplicationLab3.4.7(6).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) 
{
	int iterationsCount;
	if (number < 2)
		return false;
	iterationsCount = ceil(sqrt(number));
	for (int i = 2; i < iterationsCount; i++)
		if (number % i == 0) 
			return false;
	return true;
}

int main(void)
{
	for (int i = 0; i <= 21; i++)
		if (isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}
