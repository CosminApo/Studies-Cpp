/*
Write a program to calculate the commission payable on a sale

inputs : value of sale
process: select the appropriate rate depending on the sale value and add the commision % accordingly
output: comission value

*/

#include <iostream>

int main()
{
	float saleValue = 0;
	std::cout << "Insert the value of the sale: ";
	std::cin >> saleValue;
	if (saleValue > 0 && saleValue < 1000)
	{
		std::cout << "The commission payable is: " << saleValue * 0.01;
	}
	else if (saleValue >= 1000 && saleValue <= 9999)
	{
		std::cout << "The commission payable is: " << saleValue * 0.05;
	}
	else 
	{
		std::cout << "The commission payable is: " << saleValue * 0.1;
	}
	
	return 0;
}