#include <sstream>

#include "Person.h"



Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;

	cout << "memory location of object: " << this << endl;
}


Person::~Person()
{
}

string Person::toString()
{
	stringstream ss;

	ss << "Name: " << name;
	ss << "; Age: " << age;


	return ss.str();
}
