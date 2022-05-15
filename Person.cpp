#include "Person.h"

//>-----------------<Init>-----------------<
Person::Person()
{
	this->name = "";
	this->surname = "";
	this->age = 0;
}

Person::Person(string name, string surname, uint32_t age) : Person()
{
	SetName(name);
	SetSurname(surname);
	SetAge(age);
}

//>-----------------<Getter>-----------------<
string Person::GetName()
{
	return this->name;
}

string Person::GetSurname()
{
	return this->surname;
}

uint32_t Person::GetAge()
{
	return this->age;
}

//>-----------------<Setter>-----------------<
void Person::SetName(string name)
{
	this->name = name;
}

void Person::SetSurname(string surname)
{
	this->surname = surname;
}

void Person::SetAge(uint32_t age)
{
	this->age = age;
}

//>-----------------<Del>-----------------<
Person::~Person()
{
	this->name.clear();
	this->surname.clear();
	this->age = NULL;
}

