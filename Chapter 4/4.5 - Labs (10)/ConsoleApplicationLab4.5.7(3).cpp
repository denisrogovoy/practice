// ConsoleApplicationLab4.5.7(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string first, second;
	bool result = true;
	int letterCountFirst = 0, letterCountSecond = 0, index = -1;
	std::cout << "Enter first word: ";
	std::cin >> first;
	std::cout << "Enter second word: ";
	std::cin >> second;
	if (first.length() != second.length())
		result = false;
	else
	{
		for (int i = 0; i < first.length(); i++)
		{
			while ((index = first.find(first[i], index + 1)) != -1)
				letterCountFirst++;
			while ((index = second.find(first[i], index + 1)) != -1)
				letterCountSecond++;
			if (letterCountFirst != letterCountSecond)
			{
				result = false;
				break;
			}
		}
	}
	std::cout << (result ? "" : "not ") << "anagrams" << std::endl;
	return 0;
}

