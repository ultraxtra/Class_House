
#include "Flat.h"
#include "House.h"

#include <iostream>
#include <string>

using namespace std;



int main()
{
	uint32_t size;

	cout << "Enter amount of flats: ";
	cin >> size;
	cin.ignore();
	Flat* flats = new Flat[size];
	House* houses = new House[size];

	string buff;

	for (size_t i = 0; i < size; i++)
	{	
		cout << "Enter adress: ";
		getline(cin,buff);
		houses[i].SetAdress(buff);
		flats[i].SetInfo();
	}
	system("cls");
	for (size_t i = 0; i < size; i++)
	{
		flats[i].GetInfo();
		cout << "Adress" << houses[i].GetAdress(buff);
	}


	return 0;
}

