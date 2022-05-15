#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
	string name;
	string surname;
	uint32_t age;



public:
	//>-----------------<Init>-----------------<
	Person();
	Person(string name, string surname, uint32_t age);
		 
	//>-----------------<Foo>-----------------<
	//>-----------------<Getter>-----------------<
	string GetName();
	string GetSurname();
	uint32_t GetAge();
	//>-----------------<Setter>-----------------<
	void SetName(string name);
	void SetSurname(string surname);
	void SetAge(uint32_t age);



	//>-----------------<Del>-----------------<
	~Person();



};

