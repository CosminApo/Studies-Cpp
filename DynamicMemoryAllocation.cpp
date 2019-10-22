#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

struct Point
{
	int m_PosX;
	int m_PosY;
};

int main()
{
	//int x{ 0 };
	//int *ptr = nullptr;
	//std::cout << std::setbase(16) << "address pointed to: " << ptr << std::endl;
	//ptr = new int;
	//std::cout << "address pointed to: " << ptr << std::endl;
	//std::cout << std::setbase(10) << "value pointed to: " << *ptr << std::endl;

	//if (ptr != 0)
	//{
	//	*ptr = 10;
	//	std::cout << "value pointed to: " << *ptr << std::endl;
	//	x = *ptr;
	//
	//}
	//delete ptr;
	//ptr = nullptr;vote t=]sadp=dsap[]ds
	//std::cout << x << "\n";
	/*int *ptr = new int[100];
	if (ptr != 0)
	{
		for (int i = 0; i < 100; i++)
		{
			*(ptr+i) = 100-i;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Value number " << i+1 << " --> " << *(ptr + i) << std::endl;
	}
	delete[] ptr;
*/

	srand(time(NULL));
	Point* ptr = nullptr;
	ptr = new Point[100];
	if (ptr != 0)
	{
		for (int i = 0; i < 100; i++)
		{
			(ptr + i)->m_PosX = rand() % 600;
			(ptr + i)->m_PosY = rand() % 600;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Point number " << i << " : " << (ptr + i)->m_PosX << " " << (ptr + i)->m_PosY << std::endl;
	}
	

	delete[] ptr;


	return 0;
}