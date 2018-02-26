// String Handling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


//string& means pass the string by reference
//string& = ref string in c#
string trim(string& str)
{
	//size_t is an unsigned way of representing the size of something
	//apparently use this if you want to use the size of something because it avoids some problems
	size_t first = str.find_first_not_of(' ');
	//npos = max value of size_t
	//meaning that if "first" is the max size (aka all characters are ' ') just return an empty string
	if (first == string::npos)
	{
		return "";
	}
	size_t last = str.find_last_not_of(' ');
	//remember that size_t is a number
	//so str.substr gets the string inside str, from char in position "last" to the char in position "first+1"
	return str.substr(first, (last - first + 1));
}

int _tmain(int argc, _TCHAR* argv[])
{
	string one = "oneoneone";
	string two = "   twotwotwo";

	cout << one << endl;
	cout << two << endl;

	cout << endl << "Concatenation" << endl;
	string three = one + two;
	cout << three << endl;

	cout << endl << "Trimming" << endl;
	cout << trim(two) << endl;

	cout << endl << "Length" << endl;
	cout << one.length() << endl;

	cout << endl << "Capitalisation" << endl;
	std::transform(one.begin(), one.end(), one.begin(), ::toupper);
	cout << one << endl;

	cout << endl << "Splitting" << endl;
	vector<char> v(one.begin(), one.end());
	for (vector<char>::const_iterator i = v.begin(); i != v.end(); i++)
		cout << *i << ' '; //*i =  call i by pointer

	cout << endl << "Search for string" << endl;
	string five = "two";
	size_t y = two.find(five);
	if (y != string::npos)
	{
		cout << two << " Contains the string " << five << " , first found in location " << y << endl;
	}
	else
	{
		cout << two << " Does not contain the string " << five << endl;
	}


	cout << endl << "Random Character" << endl;
	int r = rand() % 1 + 6;
	cout << "The character at position " << r << " in the string " << one << " is " << one[r] << endl;


	cin.get();
	return 0;
}

