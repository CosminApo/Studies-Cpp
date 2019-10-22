/*
Write a program that calculates the payslip of an employee given the amount of hours worked
inputs : hours worked
process: Check hours worked is more than. If hours worked>60 then take difference and *(8*2). If hours worked is more than 35 then (hours worked -60-35)*(8*2)
output : totalPay
*/

#include <iostream>

int main()
{
	float hourPay = 8, totalPay = 0;
	int hoursWorked = 0, hours60 = 0, hours35 = 0, hoursCalc = 0;
	while (hoursWorked <= 0)
	{
		std::cout << "How many hours have your worked?";
		std::cin >> hoursWorked;
		hoursCalc = hoursWorked;
	}
	if (hoursWorked > 60)
	{
		hours60 = hoursCalc - 60;
		hoursCalc = hoursCalc - 60;
	}
	if (hoursCalc > 35)
	{
		hours35 = hoursCalc - 35;
		hoursCalc = hoursCalc - 35;
	}
	totalPay = (hours60 * 16) + (hours35 * 12) + (hoursCalc * 8);
	std::cout << "Your total pay is " << totalPay << " and your Overtime pay is " << totalPay - (hoursCalc * 8);
	return 0;
}