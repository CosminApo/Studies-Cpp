#include <iostream>
#include <string>


int main()
{
	char initial; //resolution = values that can be assigned 
	int wholeNumber;
	double largeNumber;
	bool yesNo;
	
	initial = 's';
	wholeNumber = 10;
	largeNumber = 1.23232; // = is an assignement, after the equals is an expression
	yesNo = true;
	std::string myString = "ban";

	//std::cout << initial << wholeNumber << largeNumber << yesNo; //<< is an insertion operator

	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	std::cout << "Enter Number 1 : ";
	std::cin >> num1; // >> extraction operator
	std::cout << "Enter Number 2 : ";
	std::cin >> num2;

	sum = num1 + num2;

	std::cout << num1 << " + " << num2 << " = " << sum;

	//++x and x++ are different (pre/post increment)

	return 0;
}