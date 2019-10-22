#include <iostream>

int addNumbers(int _number1, int _number2);
int subtractNumbers(int _number1, int _number2);
int multiplyNumbers(int _number1, int _number2);
int insertNumber();

int main()
{
	int number1 = 0, number2 = 0, result = 0;
	std::cout << "This program adds two numbers together \n";
	number1 = insertNumber();
	number2 = insertNumber();
	result = addNumbers(number1, number2);
	std::cout << "\n\n result of addition is:- " << result << "\n\n";
	result = subtractNumbers(number1, number2);
	std::cout << "\n\n result of subtraction is:- " << result << "\n\n";
	result = multiplyNumbers(number1, number2);
	std::cout << "\n\n result of multiplication is:- " << result << "\n\n";
	std::cin.get();
	return 0;
}

int insertNumber()
{
	int number = 0;
	std::cout << "Enteer and integer number:> \n\n";
	std::cin >> number;
	return number;
}
int addNumbers(int _number1, int _number2)
{
	int result = 0;
	result = _number1 + _number2;
	return result;
}
int subtractNumbers(int _number1, int _number2)
{
	int result = 0;
	result = _number1 - _number2;
	return result;

}
int multiplyNumbers(int _number1, int _number2)
{
	int result = 0;
	result = _number1 * _number2;
	return result;
}
