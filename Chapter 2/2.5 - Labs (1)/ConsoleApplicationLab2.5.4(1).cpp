// ConsoleApplicationLab2.5.4(1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main(void)
{
	int choice;
	double a, b;
	do
	{
		cout << "MENU:" << endl;
		cout << "0 - exit" << endl;
		cout << "1 - addition" << endl;
		cout << "2 - subtraction" << endl;
		cout << "3 - multiplication" << endl;
		cout << "4 - division" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter two numbers \n";
			cin >> a >> b;
			cout << "Result: " << a + b << endl;
			break;
		case 2:
			cout << "Enter two numbers \n";
			cin >> a >> b;
			cout << "Result: " << a - b << endl;
			break;
		case 3:
			cout << "Enter two numbers \n";
			cin >> a >> b;
			cout << "Result: " << a * b << endl;
			break;
		case 4:
			cout << "Enter two numbers \n";
			cin >> a >> b;
			if (b == 0) 
				cout << "Error. Second number is zero \n";
			else
				cout << "Result: " << a / b << endl;
			break;
		default: "Error. No number \n";
		}
	} while (choice != 0);
	cout << "Bye";
	return 0;
}

