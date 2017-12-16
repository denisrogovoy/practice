// ConsoleApplicationLab 2.9.8 (4).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithMean = 0;
	double HarmMean = 0;
	double GeomMean = 1;
	double RootMSquare = 0;
	for (int i = 0; i < n; i++)
	{
		ArithMean += vector[i];
		HarmMean += 1 / vector[i];
		GeomMean *= vector[i];
		RootMSquare += pow(vector[i], 2);
	}
	cout << GeomMean << endl;

	ArithMean /= n;
	HarmMean = n / HarmMean;
	GeomMean = pow(GeomMean, 1 / (double)n);
	RootMSquare = sqrt(RootMSquare / n);
	cout << "Arithmetic Mean = " << ArithMean << endl;
	cout << "Harmonic Mean = " << HarmMean << endl;
	cout << "Geometric Mean = " << GeomMean << endl;
	cout << "RootMean Square = " << RootMSquare << endl;
	cout << endl;
	return 0;
}
