#include <iostream>
/*
Write a program that calculates the volume of a rectangular pool given width, length and depth

inputs: width, length, depth
process: V=whl, volume = product of width, length and depth
output: volume of pool

*/
int main()
{
	int width{ 0 }, depth{ 0 }, length{ 0 };

	std::cout << "Please insert the width, length and depth of your pool (in meters): ";
	std::cin >> width >> depth >> length;
	std::cout << "The volume of the water required to fill your pool is: " << width * depth * length << " m^3";
	return 0;
}