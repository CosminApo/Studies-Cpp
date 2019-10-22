#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>

/*
Write a program that calculates the volume and area of a sphere

inputs: radius of the sphere
process: Volume = ( 4 pi r^3 ) / 3
		 Area = 4 pi r^2
output: Area and Volume of the sphere
*/

int main()
{
	float radius{ 0 }, volume{ 0 }, area{ 0 };
	const float pi = M_PI;
	
	std::cout << "Please insert the radius of your sphere: ";
	std::cin >> radius;
	volume = (4 * (pi*pow(radius, 3))) / 3.0f; // pow (double base, double exponent)
	area = 4 * (pi*pow(radius, 2));
	std::cout << "The volume of your sphere is: " << volume << " units^3 \n The area of your sphere is: " << area << " units^2 ";


	return 0;

}