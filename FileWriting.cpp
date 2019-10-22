#include <iostream>
#include <fstream>
#include <string>

int main()
{
#pragma region Output
	std::string fileName;
	std::ofstream outFile;
	std::cout << "Please insert the file name \n";
	std::getline(std::cin, fileName);
	outFile.open(fileName.c_str(), std::ios::out);
	if (outFile.is_open())
	{
		outFile << 10;
	}
	else
	{
		std::cout << "Error: could not open file." << std::endl;
	}
	outFile.close();
#pragma endregion

	std::cout << "Please insert the file name \n";
	std::getline(std::cin, fileName);

	std::ifstream inFile;
	inFile.open(fileName.c_str(), std::ios::out);
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			int x;
			inFile >> x;
			std::cout << x << std::endl;
		}
	}
	else
	{
		std::cout << "Error: could not open file." << std::endl;
	}
	inFile.close();

	return 0;
}