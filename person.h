#ifndef PERSON_H_
#define PERSON_H_
#include <string>

class Person
{
private:
	static const size_t LIMIT = 25;
	std::string lname;
	char fname[LIMIT];
public:
	Person() {lname = "Lupa"; fname[0] = '\0';}
	Person(const std::string & ln, const char * fn = "Heyyou");
	void Show() const;
	void FormalShow() const;
};

#endif