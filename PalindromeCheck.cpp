// PalindromeCheck.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string userinput = " ";
	cout << "Please insert your word" << endl;
	cin >> userinput;
	vector<char> wordbychar;
	for (int i = userinput.length() - 1; i >= 0; i--)
	{
		wordbychar.push_back(userinput[i]);
	}
	string reversed(wordbychar.begin(), wordbychar.end());
	if (userinput == reversed)
	{
		cout << "Yes, " << userinput << " is a palindrome" << endl;
	}
	else
	{ 
		cout << userinput << " is not a palindrome" << endl;
	}

	return 0;
}

