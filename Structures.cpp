#include <iostream>
#include <cstdlib>
#include <ctime>

//use & after type for pass by ref
// int (&arrayName)[] to pass array by ref


struct gameObject
{
	int m_xPosition;
	int m_yPosition;
	float m_velocity;
	char m_id[20];
	int m_noLives;
	bool m_alive;
};

void printStruct(gameObject _toPrint);
void initStruct(gameObject& _gameStruct);
void initArray(int _array[]);

int main()
{

	srand(time(NULL));
	gameObject mySheep;
	gameObject mySheep2;
	mySheep.m_xPosition = rand() % 10;
	mySheep.m_yPosition = rand() % 10;
	mySheep.m_velocity = rand() % 10;
	mySheep.m_noLives = 5;
	mySheep.m_alive = true;
	strcpy_s(mySheep.m_id, 20, "Sheeping");
	printStruct(mySheep);
	initStruct(mySheep2);

	int myArray[100];

    return 0;
}

void printStruct(gameObject _gameStruct)
{
	std::cout << "m_alive = " <<_gameStruct.m_alive << std::endl;
	std::cout << "m_xPosition = " << _gameStruct.m_alive << std::endl;
	std::cout << "m_yPosition = " << _gameStruct.m_alive << std::endl;
	std::cout << "m_velocity = " << _gameStruct.m_alive << std::endl;
	std::cout << "m_noLives = " << _gameStruct.m_alive << std::endl;
	std::cout << "m_id = " << _gameStruct.m_id << std::endl;
}

void initStruct(gameObject& _gameStruct)
{
	_gameStruct.m_xPosition = rand() % 10;
	_gameStruct.m_yPosition = rand() % 10;
	_gameStruct.m_velocity = rand() % 10;
	_gameStruct.m_noLives = 5;
	_gameStruct.m_alive = true;
	strcpy_s(_gameStruct.m_id, 20, "Sheeping");
}

void initArray(int _array[])
{
	for (int i = 0; i < 100; i++)
	{
		_array[i] = 0;
	}
}
