/*
----------NOTES------
pointer "must" have the same data type as the variable it points to


---------Questions-------
what is that "->" and whats the name of it. AMSWER: access stuff from structures

*/

#include <iostream>
#include <iomanip>

void f1(int* _y);

int main()
{
	int x = 0;
	x = 12;
	int y = 105;
	int* ptr = nullptr; //always init like this
	int* ptr2 = 0;
	ptr = &x;
	ptr2 = &y;
	*ptr = 54; // * is a de-referencing operator in this case
	std::cout << x << std::endl;
	std::cout << std::setbase(16) << &x << std::endl;
	std::cout << ptr << std::endl;
	std::cout << std::setbase(16) << &ptr << std::endl;
	f1(ptr);
	//int& refvar = x;
	return 0;
}

void f1(int* _x)
{
	std::cout << std::setbase(10) << *_x;
	*_x = *_x * 12;
}