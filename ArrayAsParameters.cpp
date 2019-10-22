#include <iostream>
#include <cstring>
#include <iomanip>

// array[3][11] = array [4][0]

void func1(int _x) //pass by value
{
	std::cout << _x << std::endl;
	_x *= 3;
	std::cout << _x;
}

void initMap(char _charArray[], int _size, char _value) //pass by ref
{
	for (int i = 0; i < _size; i++)
	{
		_charArray[i] = _value;
	}
}
void displayMap(char _charArray[], int _size)
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << std::setw(10) << i+1;
	}
	std::cout << std::endl  << 'A' << std::setw(9);
	for (int i = 0; i < _size; i++)
	{
		std::cout  <<_charArray[i] << std::setw(10);
	}
}

char readMapPosition(char _charArray[], int _position)
{
	return _charArray[_position];
}

void setMapValue(char _charArray[], int _position, int _value)
{
	_charArray[_position] = _value;
}

int main()
{
	char map[10] = { 0 };

	initMap(map, 10, '@');
	displayMap(map, 10);

	return 0;
}