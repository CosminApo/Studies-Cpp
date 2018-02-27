// ShoppingList (add elements to array).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	cout << "Welcome to the Shopping List program" << endl;
	cout << "When you are ready, add to your shopping list by typing in the first item and pressing enter" << endl;
	cout << "When you are done inserting items, Type Exit" << endl;

	int i = 0;
	list<string> shoppinglist;
	string input = "";
	while (input != "Exit")
	{
		cout << "There are currently " << i << " items in the list" << endl;
		cin >> input;
		if (input != "Exit")
		shoppinglist.push_back(input);

		i++;
	}
	cout << "Items in the list: " << endl;
	for each (string i in shoppinglist)
	{
		cout << i << endl;
	}

	cout << "Do you wish to save the list to a file? Yes / No" << endl;
	string reply;
	cin >> reply;
	if (reply == "Yes")
	{
		ofstream shoppinglistfile;
		shoppinglistfile.open("shoppinglist.txt");
		for each (string i in shoppinglist)
		{
			shoppinglistfile << i << endl;
		}
		shoppinglistfile.close();
	}

	cin.get();
	return 0;
}

