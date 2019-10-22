/*
no predefined error checking in c++ for accessing index

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	//srand(time(NULL));
	//int myList[100];
	//for (int i = 0; i < 100; i++)
	//{
	//	myList[i] = rand() % 100;
	//	std::cout << "Index " << i << ": " << myList[i] << "\n";
	//}
	//for (int i = 100; i < 2999; i++) //if i access outside bounds, does it convert to int?
	//{
	//	std::cout << "Random value in the memory: " <<myList[i] << std::endl;
	//}

	int array1[5] = { 1,3,6,9,12 };
	int array2[5] = {0};
	for (int i = 1; i <= 5; i++)
	{
		array2[i-1] = array1[5 - i];
	}
	return 0;
}