#include <iostream>
#include <cmath>

/*
function: a^2+b^2+d^2 = e^2 
e = distance

a = x diff
b = y diff
d = z diff

input: coords
output: distance

*/


float difference3D(float _coords[])
{
	float a = _coords[0] - _coords[3];
	float b = _coords[1] - _coords[4];
	float d = _coords[2] - _coords[5];
	float e = sqrt(pow(a, 2) + pow(b, 2) + pow(d, 2)); 

	return e;
}

int main()
{
	float coords[6];
	std::cout << "Please insert your coordinates" << std::endl;

	std::cout << "Please insert your first coordinate: ";
	std::cout << "\nX value = ";
	std::cin >> coords[0];
	std::cout << "Y value = ";
	std::cin >> coords[1];
	std::cout << "Z value = ";
	std::cin >> coords[2];


	std::cout << "\nPlease insert your second coordinate: ";
	std::cout << "\nX value = ";
	std::cin >> coords[3];
	std::cout << "Y value = ";
	std::cin >> coords[4];
	std::cout << "Z value = ";
	std::cin >> coords[5];

	int diff = difference3D(coords);

	std::cout << "\nThe difference between those two numbers is " << diff;

	return 0;
}