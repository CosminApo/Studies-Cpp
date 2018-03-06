// ReversingAString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string userinput = "";
	vector<char> listofchars;
	cout << "Please insert the string you want reversed" << endl;
	cin >> userinput;
	for (int i = userinput.length()-1; i >= 0; i--)
	{
		listofchars.push_back(userinput[i]);
	}
	
	for (vector<char>::const_iterator i = listofchars.begin(); i != listofchars.end(); ++i)
	{
		cout << *i;
	}

	cin.get();
	return 0;
}

