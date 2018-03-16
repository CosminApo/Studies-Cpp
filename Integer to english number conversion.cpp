// Integer to english number conversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


#pragma region Comments
/*Instructions:
Integer to english number conversion
Write a program that takes an integer and displays the English name of that value.

You should support both positive and negative numbers, in the range supported by a 32 - bit integer(approximately - 2 billion to 2 billion).

Examples:

10->ten
121->one hundred twenty one
1032->one thousand thirty two
11043->eleven thousand forty three
1200000->one million two hundred thousand
source: https://www.cprogramming.com/challenges/integer-to-english.html
*/

/* Thoughts:
---max int size is 2147483647 (10 digits)---

every 3 digits theres an indicator
ex: 123321 = onehundredtwentythree THOUSAND threhundredtwentyone
so split it 123 231
make a loop foreach
1 = get hundred
if 2nd digit !=0
get twenty
get one
else
get one

add all together

research:
get rid of last n digits in number a

a/10^n

get rid of first n digits in number a

a%10^n
*/

#pragma endregion
string GetTens(int x)
{
	string tens;
	switch (x)
	{
	case 1:
		tens = "ten";
		break;
	case 2:
		tens = "twenty";
		break;
	case 3:
		tens = "thirty";
		break;
	case 4:
		tens = "fourty";
		break;
	case 5:
		tens = "fifty";
	case 6:
		tens = "sixty";
	case 7:
		tens = "seventy";
		break;
	case 8:
		tens = "eighty";
		break;
	case 9:
		tens = "ninety";
		break;
	}
	return tens;
}
string GetOnes(int x)
{
	string ones;
	switch (x)
	{
	case 1:
		ones = "one";
		break;
	case 2:
		ones = "two";
		break;
	case 3:
		ones = "three";
		break;
	case 4:
		ones = "four";
		break;
	case 5:
		ones = "five";
		break;
	case 6:
		ones = "six";
		break;
	case 7:
		ones = "seven";
		break;
	case 8:
		ones = "eight";
		break;
	case 9:
		ones = "nine";
		break;

	}
	return ones;
}
string GetOrder(int x)
{
	string order;
	switch (x)
	{
	case 1:
		order = "thousand";
		break;
	case 2:
		order = "million";
		break;
	case 3:
		order = "billion";
		break;
	}
	return order;
}
string GetTeens(int x)
{
	string tens = "";
	switch (x)
	{
	case 0:
		tens = "ten"; break;
	case 1:
		tens = "eleven"; break;
	case 2:
		tens = "twelve"; break;
	case 3:
		tens = "thirteen"; break;
	case 4:
		tens = "fourteen"; break;
	case 5:
		tens = "fifteen"; break;
	case 6:
		tens = "sixteen"; break;
	case 7:
		tens = "seventeen"; break;
	case 8:
		tens = "eighteen"; break;
	case 9:
		tens = "nineteen"; break;
	}
	return tens;
}

int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		int order = 0;
		int userinput, lengthofnumber = 0, j = 0;
		vector<int> separatednumber;
		string tempstring;
		string numberinwords;
		cout << "Please insert your number: " << endl;
		cin >> userinput;
		int copyofuserinput1 = userinput;
		while (copyofuserinput1)
		{
			copyofuserinput1 /= 10;
			lengthofnumber++;
		}
		int remainingchars = lengthofnumber;
		for (int i = 0; i < lengthofnumber; i++)
		{
			if (remainingchars < 3)
			{
				j++;
				string userinputstring = to_string(userinput);
				tempstring = userinputstring[lengthofnumber - i - 1] + tempstring;
				if (j == remainingchars)
				{
					while (tempstring.length() < 3)
						tempstring = "0" + tempstring;
					stringstream asd(tempstring);
					int tempint;
					asd >> tempint;
					separatednumber.push_back(tempint);
					tempstring = "";
					j = 0;
				}
			}
			else {
				j++;
				string userinputstring = to_string(userinput);
				tempstring = userinputstring[lengthofnumber - i - 1] + tempstring;
				if (j == 3)
				{
					stringstream asd(tempstring);
					int tempint;
					asd >> tempint;
					separatednumber.push_back(tempint);
					tempstring = "";
					j = 0;
					remainingchars -= 3;
				}
			}
		}

		for each (int x in separatednumber)
		{
			string sizechecker = to_string(x);
			string ones, tens, firstones, hundreds = "", orderstring = "";

			if (sizechecker.length() == 3)
			{
				int firstnumber = 0, secondnumber = 0, thirdnumber = 0;
				firstnumber = x / 100;
				string secondnumberstring = to_string(x);
				secondnumberstring = secondnumberstring[1];
				stringstream asd(secondnumberstring);
				asd >> secondnumber;
				string thirdnumberstring = to_string(x);
				thirdnumberstring = thirdnumberstring[2];
				stringstream assd(thirdnumberstring);
				assd >> thirdnumber;
				if (secondnumber != 0)
				{
					tens = GetTens(secondnumber);
					ones = GetOnes(thirdnumber);
				}
				else
					ones = GetOnes(thirdnumber);

				if (firstnumber != 0)
				{
					firstones = GetOnes(firstnumber);
					firstones += " hundred";
				}
				if (secondnumber == 1)
				{
					tens = GetTeens(thirdnumber);
					ones = "";
				}
			}
			else if (sizechecker.length() == 2)
			{
				int firstnumber = 0, secondnumber = 0, thirdnumber = 0;
				string secondnumberstring = to_string(x);
				secondnumberstring = secondnumberstring[0];
				stringstream asd(secondnumberstring);
				asd >> secondnumber;
				string thirdnumberstring = to_string(x);
				thirdnumberstring = thirdnumberstring[1];
				stringstream assd(thirdnumberstring);
				assd >> thirdnumber;
				if (secondnumber != 0)
				{
					tens = GetTens(secondnumber);
					ones = GetOnes(thirdnumber);
				}
				else
					ones = GetOnes(thirdnumber);
				if (firstnumber != 0)
				{
					firstones = GetOnes(firstnumber);
					firstones += " hundred";
				}

				if (secondnumber == 1)
				{
					tens = GetTeens(thirdnumber);
					ones = "";
				}
			}
			else if (sizechecker.length() == 1)
			{
				int firstnumber = 0, secondnumber = 0, thirdnumber = 0;
				string thirdnumberstring = to_string(x);
				thirdnumberstring = thirdnumberstring[0];
				stringstream assd(thirdnumberstring);
				assd >> firstnumber;
				if (secondnumber != 0)
				{
					tens = GetTens(secondnumber);
					ones = GetOnes(thirdnumber);
				}
				else
					ones = GetOnes(thirdnumber);

				if (firstnumber != 0)
				{
					firstones = GetOnes(firstnumber);

				}
				orderstring = "";
			}
			orderstring = GetOrder(order);
			numberinwords = firstones + " " + tens + " " + ones + " " + orderstring + " " + numberinwords;
			order++;
		}
		cout << userinput << " -> " << numberinwords << endl;
	}
	return 0;
}


