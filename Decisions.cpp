/*
Control structures -> decision structures
SDLC: 1. Define the problem: Inputs, Processes, Outputs -> IPO diagram
	  2. Outline the solution: Decompose the problem to smaller steps, outline solution. 
	  3. Outline -> algorithm (use flowcharts / pseudocode to design it)

Flowcharts: rounded retangle = terminal
			parallelograms = input/outputs
			square box = process (defining variables is a process)
			diamond = selection

you can do: bool result = (x <= y)
coding standard: must have braces on each IF (yes, even single lines)
boundary for floats example: if (4.0 - result <= 0000.4) 
*/


/*
inputs: purchase
process: set discountrate 0.25 and shipcost to 10.00 is purchase >100, else assign 0.15 to discountrate and 5.00 to shipcost. totalbill = purchase*1-discountRate + shipcost
output: totalBill
*/

#include <iostream>
#include <math.h>

int main()
{
	float discountRate{ 0 }, shipCost{ 0 }, purchase{ 0 }, totalBill{ 0 };
	std::cout << "Please enter your purchase value. \n";
	std::cin >> purchase;
	if (purchase > 100.00)
	{
		discountRate = 0.25f;
		shipCost = 10.00;
	}
	else
	{
		discountRate = 0.15f;
		shipCost = 5.00;
	}

#pragma region Thisisaregion
	totalBill = round((purchase * (1 - discountRate) + shipCost)*100)/100;
	std::cout << "Your total bill is " << totalBill;
#pragma endregion Thisisaregion
	return 0;

}