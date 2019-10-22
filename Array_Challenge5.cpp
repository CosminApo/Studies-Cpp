#include <iostream>
#include <ctype.h>
#include <algorithm>
int main()
{
	char userInput[] = { 0 };
	int numVowels[5] = { 0 };

	std::cout << "Please insert your word. ";
	std::cin.getline(userInput, 100);
	//std::transform(userInput[0], userInput[99], userInput[0], ::tolower);
	for (int i = 0; i < 100; i++)
	{
		switch (tolower(userInput[i]))
		{
		case 97:
			numVowels[0]++;
			break;
		case 101:
			numVowels[1]++;
			break;
		case 105:
			numVowels[2]++;
			break;
		case 111:
			numVowels[3]++;
			break;
		case 117:
			numVowels[4]++;
			break;
		}

	}
	std::cout << "Number of a " << numVowels[0];
	std::cout << "\nNumber of e " << numVowels[1];
	std::cout << "\nNumber of i " << numVowels[2];
	std::cout << "\nNumber of o " << numVowels[3];
	std::cout << "\nNumber of u " << numVowels[4];
	return 0;
}