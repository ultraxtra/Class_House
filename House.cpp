
#include "House.h"


House::House()
{
	adress = "";
}

House::House(string adress)
{
	this->adress = adress;
}

string House::GetAdress(string adress)
{
	return this->adress;
}

void House::SetAdress(string adress)
{
	this->adress = adress;
}


House::~House()
{
	this->adress.clear();
}