/*
Write a program that allows the user to insert a hex or decimal number and print the number as decimal, hex or both

inputs : number, typeofnumber, typeofdisplay
process: output the number accordingly
output: the number in hex,dec or both
*/

#include<iostream>
#include<string>
#include<algorithm>

int main()
{
	int number = 0;
	std::string typeOfNumber = "";
	std::string typeOfDisplay = "";
	std::cout << "\nWould you like to insert a decimal number or hexadecimal number: ";
	std::cin >> typeOfNumber;
	std::transform(typeOfNumber.begin(), typeOfNumber.end(), typeOfNumber.begin(), ::tolower); //string to lowercase
	std::cout << "\nPlease insert your number: ";
	if (typeOfNumber == "decimal")
	{
		std::cin >> number;
	}
	else
	{
		std::cin >> std::hex >> number;
	}
	std::cout << "\nWould you like to see the number as decimal, hexadecimal or both? ";
	std::cin >> typeOfDisplay;
	std::transform(typeOfDisplay.begin(), typeOfDisplay.end(), typeOfDisplay.begin(), ::tolower);
	if (typeOfDisplay == "both")
	{
		std::cout << "\nThe number " << number << " in hexadecimal is: " << std::hex << number;
		std::cout << "\nThe number " << std::dec << number << " in decimal is: " << std::dec << number;
	}
	else if (typeOfDisplay == "hexadecimal")
	{
		std::cout << "\nThe number " << std::dec << number << " in hexadecimal is: " << std::hex << number;
	}
	else
	{
		std::cout << "\nThe number " << std::dec << number << " in decimal is: " << std::dec << number;
	}
	return 0;
}