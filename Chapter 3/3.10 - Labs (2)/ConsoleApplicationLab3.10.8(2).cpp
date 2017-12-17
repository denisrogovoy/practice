// ConsoleApplicationLab3.10.8(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection
{
	int elementNumber;
	int *elements;
};

void AddToCollection(Collection &col, int element)
{
	int *copied;
	copied = new int[col.elementNumber + 1];
	for (int i = 0; i < col.elementNumber; i++)
		copied[i] = col.elements[i];
	delete[] col.elements;
	copied[col.elementNumber] = element;
	col.elements = copied;
	col.elementNumber++;
}

void PrintCollection(Collection col)
{
	cout << "[ ";
	for (int i = 0; i < col.elementNumber; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void)
{
	Collection collection = { 0, NULL };
	int countOfElements;
	cout << "How many elements? ";
	cin >> countOfElements;
	srand(time(NULL));
	for (int i = 0; i < countOfElements; i++)
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);
	delete[] collection.elements;
	return 0;
}

