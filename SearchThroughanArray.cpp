// SearchThroughanArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iterator>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string list[5] = { "one", "two", "three", "four", "five" };
	bool happy = false;
	bool assign = false;
	int listspot = 0;
	while (happy == false)
	{	
		bool error = false;
		string search;
		cout << "Enter what you want to search" << endl;
		cin >> search;
		for (int i = 0; i < (sizeof(list) / sizeof(*list)); i++)
		{
			cout << i << endl;
			if (search == list[i])
			{
				error = true;
				cout << list[i] << " Was found in position " << i << endl;
				break;
			}
		}
		if (error == false)
		{
			cout << search << " Was not found in the list, would you like to try again? Yes / No" << endl;
			string input;
			cin >> input;
			if (input == "No")
				happy = true;
		}
	}
	cout << "Would you like to assign a value to any of the list spots? Yes / No" << endl;
	string input;
	cin >> input;
	if (input == "Yes")
		assign = true;
	if (assign == true)
	{
		cout << "What position would you like to assign it to? 1-5 "<< endl;
		cin >> listspot;
		cout << "What value do you want to assign to it?" << endl;
		string value;
		cin >> value;
		list[listspot - 1] = value;
		cout << "Done!" << endl;
	}
	return 0;
}

