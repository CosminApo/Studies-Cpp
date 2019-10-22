#include <iostream>
#include <windows.h>
#include <math.h>

int main()
{
	int refFreq = 440;
	int freq = 0;
	for (int i = 1; i <= 12; i++) //12 note chromatic scale
	{
		freq = refFreq * pow(pow(2, (1.0 / 12.0)), i);
		Beep(freq,100);
	}

	return 0;
}