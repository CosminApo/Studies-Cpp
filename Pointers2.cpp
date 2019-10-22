#include <iostream>

struct Point
{
	int m_Xpos;
	int m_Ypos;
};

void f1(int* _x);


int main()
{
	Point test[2] = { { 20,30 }, {32,32} };
	Point* ptr = nullptr;
	ptr = test;
	test[1].m_Xpos = 13;
	(*ptr).m_Xpos = 24;
	ptr->m_Xpos = 32;
	return 0;

}

void f1(int* _x)
{
	
}