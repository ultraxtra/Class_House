#pragma once

#include "Flat.h"

class House
{
private:
	string adress;

public:

	House();
	House(string adress);

	string GetAdress(string adress);
	void SetAdress(string adress);

	~House();

};

