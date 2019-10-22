#include <iostream>


float map()
{
	float numToConvert = -5;
	float max_scale1 = 0;
	float min_scale1 = -10;
	float max_scale2 = -5;
	float min_scale2 = -10;
	float numConverted = 0;

	float percent = abs((numToConvert / (max_scale1 - min_scale1) * 100));
	numConverted = (percent*(max_scale2 - min_scale2) / 100) + min_scale2;

	std::cout << numConverted;
	std::cin.get();
	return 0;

}

int main()
{
	map();
	return 0;
}