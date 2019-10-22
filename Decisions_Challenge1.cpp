/*
Write a program that asks the user to enter two integers, compares them and prints out the larger. Special case for equal numbers
inputs : number1, number2
process: compare no1 with no2
output : print out bigger number
*/


#include <iostream>

int main()
{
	int number1 = 0, number2 = 0;
	std::cout << "Please insert two numbers: ";
	std::cin >> number1 >> number2;
	if (number1 > number2)
	{
		std::cout << number1 << " is larger ";
	}
	else
	{
		std::cout << number2 << " is larger";
	}
	return 0;
}