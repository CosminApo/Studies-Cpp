#include <iostream>
#include <windows.h>

int main(void)
{
	std::cout << "Funky beep";
	int x = 440;
	while (true)
	{
		x += 50;
		Beep(x, 100);
	}

	return 0;
}