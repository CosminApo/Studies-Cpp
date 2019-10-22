#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	int numbers[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		numbers[i] = rand();
	}
	std::cout << "Elements at even index: ";
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << numbers[i] << " ";
		}
	}
	std::cout << "\nEvery even element: ";
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			std::cout << numbers[i] << " ";
		}
	}
	std::cout << "\nEvery element in reverse order: ";
	for (int i = 9; i >= 0; i--)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << "\nFirst and last element: ";
	std::cout << numbers[0] << " " << numbers[9];
	return 0;
}