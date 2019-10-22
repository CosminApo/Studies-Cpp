#include <iostream>
/*
Write a program that converts Celsius to Fahrenheit

inputs: temp in Celsius
process: convert Celsius to Fahrenheit -> F = (C+32)*(5/9)
output: temp in Fahrenheit

*/


int main()
{
	double tempCelsius{ 0 }, tempFahrenheit{ 0 };
	
	std::cout << "Please insert your temperature in Celsius: ";
	std::cin >> tempCelsius;
	tempFahrenheit = tempCelsius*(9.0f/5.0f)+32;
	std::cout << tempCelsius << " Celsius is equal to " << tempFahrenheit << " Fahrenheit";

	return 0;
}