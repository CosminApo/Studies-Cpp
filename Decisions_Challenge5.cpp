/*
Write a program that calculates the amount owned to rent a bicycle based on the amount of days and season.

inputs : Season, numberOfDays
process: add 50 to the totalCost, add numberOfDays * seasonTarif to totalCost, add discount if applicable
outputs: totalCost
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

int main()
{
	std::string season = "" ;
	int numberOfDays = 0;
	float totalCost = 0;
	while (season != "spring" && season != "autumn" && season != "summer" && season != "winter") //when comparing strings remember that it: checks char by char, lower case < uppercase
	{
		std::cout << "Please insert the current season: ";
		std::cin >> season;
		std::transform(season.begin(), season.end(), season.begin(), ::tolower);
		if (season == "fall")
		{
			season = "autumn";
		}
	}
	while (numberOfDays <= 0)
	{
		std::cout << "Please insert the amount of days you wish to rent the bike for: ";
		std::cin >> numberOfDays;
	}
	if (season == "spring")
	{
		totalCost = 5 * numberOfDays;
	}
	else if (season == "summer")
	{
		totalCost = 7.50 * numberOfDays;
	}
	else if (season == "winter")
	{
		totalCost = 2.50 * numberOfDays;
	}
	else if (season == "autumn")
	{
		totalCost = 3.75 * numberOfDays;
	}
	if (numberOfDays > 7)
	{
		totalCost = totalCost * 0.75;
	}
	totalCost += 50;
	std::cout << "The total cost is: " << std::setprecision(4) << totalCost;
	return 0;
}