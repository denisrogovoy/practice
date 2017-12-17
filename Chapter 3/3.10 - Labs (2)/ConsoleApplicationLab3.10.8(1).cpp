// ConsoleApplicationLab3.10.8(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	int maxBallNumber;
	int ballsCount;
	cout << "Max ball number? ";
	cin >> maxBallNumber;
	cout << "How many balls? ";
	cin >> ballsCount;
	if (ballsCount > maxBallNumber) cout << "Error!" << endl;
	else
	{
		srand(time(NULL));
		int *numbers = new int[ballsCount];
		int n = 0, randValue = 0;
		bool notExist = true;
		while (n != ballsCount) {
			randValue = rand() % maxBallNumber + 1;
			for (int i = 0; i < ballsCount; i++)
				if (randValue == numbers[i])
				{
					notExist = false;
					break;
				}
			if (notExist)
			{
				numbers[n] = randValue;
				n++;
			}
			notExist = true;
		}
		for (int i = 0; i < ballsCount; i++)
			cout << numbers[i] << " ";
		cout << endl;
		delete[] numbers;
	}
	return 0;
}

