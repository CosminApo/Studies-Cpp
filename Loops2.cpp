#include <iostream>

int main()
{
	int countEndl = 0;

	std::cout << "\nWith a for loop: \n\n";
	for (char a = 'A'; a <= 'z'; a++,countEndl++)
	{
		if (a == 91)
		{
			a = 97;
		}
		if (countEndl == 16)
		{
			std::cout << std::endl;
			countEndl = 0;
		}
		std::cout << a;
	}
	std::cout<<std::endl;

	std::cout << "\nWith a while loop: \n\n";
	countEndl = 0;
	char count = 'A';
	while (count < 123)
	{
		if (count == 91)
		{
			count = 97;
		}
		if (countEndl == 16)
		{
			std::cout << std::endl;
			countEndl = 0;
		}
		std::cout << count;
		count++;
		countEndl++;
	}

	std::cout << std::endl;
	std::cout << "\nWith a do while loop: \n \n";

	char count2 = 'A';
	countEndl = 1;
	do 
	{
		if (count2 == 91)
		{
			count2 = 97;
		}
		std::cout << count2;
		if (countEndl == 16)
		{
			std::cout << std::endl;
			countEndl = 0;
		}
		count2++;
		countEndl++;
	} while (count2 < 123);

	return 0;
}