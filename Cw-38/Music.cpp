#include "Music.h"

Music::Music()
{
	name = "n/e";
	author = "n/e";
	year = 0;
}

Music::Music(std::string name, std::string author, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}

std::string Music::getName() const
{
    return this->name;
}

std::string Music::getAuthor() const
{
    return this->author;
}

int Music::getYear() const
{
    return this->year;
}
