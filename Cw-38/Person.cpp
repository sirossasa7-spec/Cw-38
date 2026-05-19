#include "Person.h"
#include <iomanip>
Person::Person()
{
	name = "n/e";
	isVeteran = false;
	isMilitary = false;
	isDeputat = false;

}

Person::Person(std::string name, bool isVeteran, bool isMilitary, bool isDeputat)
{
	this->name = name;
	this->isVeteran = isVeteran;
	this->isDeputat = isDeputat;
	this->isMilitary = isMilitary;
}

void Person::showInfo() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "isVeteran: " << std::boolalpha <<isVeteran << std::endl;
	std::cout << "isDeputat: " << std::boolalpha << isDeputat << std::endl;
	std::cout << "isMilitary: " << std::boolalpha << isMilitary << std::endl;

}
