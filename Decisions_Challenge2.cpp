/*
Write a program that determines if a number is odd or even

inputs : number
process: number % 2 to get result
output : odd or even depending if result is 1 or 0
*/

#include <iostream>

int main()
{
	int number = 0;
	std::cout << "Please insert your number ";
	std::cin >> number;
	if (number % 2 == 0) 
	{
		std::cout << "\n The number is even";
	}
	else 
	{
		std::cout << "\n The number is odd";
	}
	return 0;
}