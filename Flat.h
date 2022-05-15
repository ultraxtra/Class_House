#pragma once

#include "Person.h"

class Flat
{
private:
	string number;
	uint32_t amount_of_people;
	Person* people = nullptr;


public:
	Flat();
	Flat(uint32_t amount_of_people);
	Flat(Person* people, uint32_t amount_of_people);

	void GetInfo();
	void SetInfo();


	~Flat();



};

 