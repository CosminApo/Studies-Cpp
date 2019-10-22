#include <iostream>

int main()
{
	char names[4][100] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Enter Name in format: Surname, Forename. \n";
		std::cin.getline(names[i], 100);
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Name " << i << " = " << names[i] << std::endl;
	}
	return 0;
}
