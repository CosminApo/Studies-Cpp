// ThreeDoorsSwitch.cpp : Defines the entry point for the console application.
//
//remember iostream always first, but after the files
//order counts, declare something before calling it

#include "stdafx.h"
#include <iostream>

using namespace std;


int functionwin()
{
	cout << "You chose well";
	cin.get();
	return 0;
}

int functionlose()
{
	cout << "You chose poorly";
	cin.get();
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int doorchoice;
	cout << "One of the door will lead you to victory, the others will make you loose" << endl;
	cout << "Choose wisely!(1 - 3)" << endl;
	cin >> doorchoice;
	switch (doorchoice){
	case 1:
		functionwin();
		break;
	case 2:
		functionlose();
		break;
	case 3:
		functionlose();
		break;
	}
	return 0;
}


