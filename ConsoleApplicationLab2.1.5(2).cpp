// ConsoleApplicationLab2.1.5(2).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;

	do {
		cout << "Enter a gross price: ";
		cin >> grossprice;
	} while (grossprice <= 0);
	do {
		cout << "Enter a tax rate: ";
		cin >> taxrate;
	} while (taxrate < 0 || taxrate>100);
	// Insert you code here
	taxvalue = (taxrate*grossprice) / (100 + taxrate);
	netprice = grossprice - taxvalue;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	return 0;
}
