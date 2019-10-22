#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main()
{
	srand(time(NULL));

	std::vector<int> v1(10);
	std::vector<int>::iterator itr;

	for (v1.begin(); itr < v1.end(); ++itr)
	{
		*itr = rand() % 1000;
		//v1.push_back(rand() % 100 + 1);
	}

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(rand()%100+1);
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << v1[i] << "\n";
	}

	itr = v1.begin() + 5;
	itr = v1.erase(itr);
	for (int i = 0; i < 10; i++)
	{
		v1.pop_back();
	}


	/*
	You cant write data outside of a vectors range (i.e. v1[11] = 12; will give a runtime error)
	*/

	return 0;
}