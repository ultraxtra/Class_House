
#include "Flat.h"


Flat::Flat()
{
	amount_of_people = 1;
	this->people = new Person[this->amount_of_people];
}

Flat::Flat(uint32_t amount_of_people)
{
	this->amount_of_people = amount_of_people;
	this->people = new Person[this->amount_of_people];
}

Flat::Flat(Person* people, uint32_t amount_of_people) : Flat(amount_of_people)
{
	this->people = people;
}

void Flat::SetInfo()
{
	string buf_s;
	uint32_t buf_i;
	cout << "Enter flat number: ";
	getline(cin, this->number);
	cout << "Enter amount of people in flat: ";
	cin >> this->amount_of_people;
	this->people = new Person[this->amount_of_people];

	cin.ignore();


	for (size_t i = 0; i < this->amount_of_people; i++)
	{
		cout << "Enter name: ";
		getline(cin, buf_s);
		people[i].SetName(buf_s);
		cout << "Enter surname: ";
		getline(cin, buf_s);
		people[i].SetSurname(buf_s);
		cout << "Enter age: ";
		cin >> buf_i;
		people[i].SetAge(buf_i);

		buf_s.clear();

		cin.ignore();
	}
}

void Flat::GetInfo()
{
	cout << "Flat #" << this->number << endl;
	for (size_t i = 0; i < this->amount_of_people; i++)
	{
		cout << "\tPerson #" << i + 1 << endl;
		cout << "Name: " << people->GetName() << endl;
		cout << "Surname: " << people->GetSurname() << endl;
		cout << "Age: " << people->GetAge() << endl << endl;
	}
}

Flat::~Flat()
{
	this->amount_of_people = NULL;
	delete[] this->people;
}




