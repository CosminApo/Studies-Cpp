/*
count control = do for x amount
l


*/
#include <iostream>
#include <Windows.h>

int main()
{
	int input = 0;
	bool exitFlag = false;
	do 
	{
		std::cout << "Enter your choice \n1.Play Hame \n2.Instructions \n3.Exit \n";
		std::cin >> input;
		switch (input)
		{
			case 1: 
					{
						std::cout << "Play Game Selected..Enjoy!" << std::endl;
						Sleep(1000);
						std::cout << "Game Over !! \n";
						system("CLS");
						break;
					}
			case 2:
					{
						std::cout << "Game Rules Selected!" << std::endl;
						Sleep(1000);
						system("CLS");
						break;
					}
			case 3:
					{
						std::cout << "Exit Selected!" << std::endl;
						Sleep(1000);
						exitFlag = true;
						break;
					}
			default:
					{
						std::cout << "Can you read?";
						Sleep(1000);
						system("CLS");
						break;
					}
		}
		
	} 	while (exitFlag == false);
	return 0;
}