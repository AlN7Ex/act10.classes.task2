#include <iostream>
#include <string>
#include <cstring>
#include "person.h"


Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strncpy(fname, fn, sizeof(fn));
}

void Person::Show() const
{
	std::cout << lname << " ";

	size_t index = 0;
	while (fname[index] != '\0')
	{
		std:: cout << fname[index];
		++index;
	}
}

void Person::FormalShow() const
{
	size_t index = 0;
	while (fname[index] != '\0')
	{
		std:: cout << fname[index];
		++index;
	}
	std::cout << ", " << lname << std::endl;
}