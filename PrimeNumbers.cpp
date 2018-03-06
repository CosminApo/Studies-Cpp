// PrimeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int count2;
	bool prime;
	int count1;
	int MaxValue;
	cout << "Insert the maximum value for the prime numbers" << endl;
	cin >> MaxValue;
	cout << "The prime numbers between 0 and " << MaxValue << " are: " << endl;

	for (count1 = 1; count1 <= MaxValue; ++count1)
	{
		count2 = 2;
		prime = true;
		while ((count2*count2) <= count1)
		{
			if ((count1 % count2) == 00)
				prime = false;
			count2++;
		}
		if (prime == true)
			cout << count1 << " " ;
	}

	cin.get();
	return 0;
}

