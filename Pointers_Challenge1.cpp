#include <iostream>

void triple_it(int *_x);
void convert_temp(double *_x);
void averageCalc(float *_x, int size);
float* maxValue(float *_x, int size);

int main()
{
	//int n = 15;
	//std::cout << n << std::endl;
	//int* ptr = &n;
	//triple_it(ptr);
	//std::cout << n;


	//double temp = 15;
	//std::cout << "Temperature in celsius: " << temp << std::endl;
	//convert_temp(&temp);
	//std::cout << "Temperature in Fahrenheit: " << temp << std::endl;

	float stuff[3] = { 1.2,1.3,1.4 };
	//averageCalc(stuff, 3); 
	float* ptr = maxValue(stuff, 3);
	std::cout << *ptr;
	return 0;
}


float* maxValue(float *_x, int size)
{
	float y = 0;
	float* x = &y; //this is dangerous btw cause multiple proccesses
	if (size != 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (*(_x+i) >= *x)
			{
				*x = *(_x + i);
			}
		}
	}
	return x;
}

void averageCalc(float *_x, int size)
{
	float x = 0;
	for (int i = 0; i < size; i++)
	{
		x += *_x++;
	}
	x = x / size;
}

void triple_it(int *_x)
{
	*_x = *_x * 3;
}
void convert_temp(double *_x)
{
	*_x = (*_x * 1.8) + 32;
}
