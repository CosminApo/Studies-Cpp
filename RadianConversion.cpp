#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>



/*

angle in degrees = angle in rad * 180/pi
angle in rad =  angle in deg * pi/180


input: angle in rad
output: angle in degrees
and viceversa

------------------------NOTE--------------------------
Floats support up to 7 decimal digits --> some precision errors may occur
Consider replacing floats with double for improved precision at the cost of performance.

*/


float degreesToRad(float _angleDegree)  
{
	float angle_radians = _angleDegree * (M_PI / 180);
	return angle_radians;
}

float radToDegree(float _angleRad)
{
	float angle_degrees = _angleRad * (180 / M_PI);
	return angle_degrees;
}

int main()
{

	float angle_radians = 0;
	float angle_degrees = 0;

	std::cout << "Insert your angle in radians: ";
	std::cin >> angle_radians;
	std::cout << "\nYour angle is equivalent to  " << radToDegree(angle_radians) << " degrees";

	std::cout << "\nInsert your angle in degrees: ";
	std::cin >> angle_degrees;
	std::cout << "\nYour angle is equivalent to  " << degreesToRad(angle_degrees) << " radians";

	return 0;
}