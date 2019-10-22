#include <iostream>


int main()
{
	float numberArray[10] = { 0 };
	std::cout << "Please insert 10 floating numbers\n ";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> numberArray[i];
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "At index " << i << " : "<< numberArray[i] << std::endl;
	}
return 0;
}