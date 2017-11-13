// ConsoleApplicationLab1.6.11(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(void) {
	bool answer;
	int value;
	cout << "Enter a value: ";
	cin >> value;
	answer = ((value >= 0 & value < 10) | (2 * value<20 & value - 2>-2) | (value - 1 > 1 & value / 2 < 10) | value == 111);// insert your expression here

	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}

