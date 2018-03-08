// GuessTheNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <random>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int numbertoguess = rand() % 99;
	int guess = 0;
	int numberofguesses = 8;

	cout << "Welcome to \"Guess the number\" " << endl;

	while (guess != numbertoguess && numberofguesses > 0)
	{
		cout << "Number of guesses left: " << numberofguesses << endl;
		cout << "Enter your guess: " << endl;
		cin >> guess;
		if (guess > numbertoguess)
			cout << "To high! " << endl;
		else if (guess < numbertoguess)
			cout << "To low! " << endl;
		numberofguesses--;
	}
	if (numberofguesses > 0)
		cout << "You win! The number was indeed " << numbertoguess << endl;
	else
		cout << "Better luck next time! " << endl;

	cin.get();
	return 0;
}

