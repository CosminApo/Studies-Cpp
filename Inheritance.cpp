#include <iostream>
#include <string>

class Creature 
{
private:
	int m_YearOfBirth;
public:
	Creature(int _yob): m_YearOfBirth(_yob) {	}
	~Creature() {}
	int getYearOfBirth() { return m_YearOfBirth; }
	int setYearOfBirth(int x) { m_YearOfBirth = x; }
};

class Dog : public Creature //tells you how it is inherited based on the stuff inside parent -> see table
{
private:
	std::string m_Name;
public:
	Dog(int _yob, std::string _Name) : m_Name(_Name), Creature(_yob) { };
	void Bark() { std::cout << "Meow " << std::endl; }
};

int main()
{
	Dog hugo(1000, "Luna");
	Creature creature2(2020);
	creature2.setYearOfBirth(2101);
	std::cout << "The year of birth is: " << creature2.getYearOfBirth() << std::endl;
	return 0;
}