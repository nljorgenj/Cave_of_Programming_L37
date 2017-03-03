#pragma once

#include <iostream>
#include <string>

using namespace std;


class Person
{
public:
	Person();
	Person(string name, int age);
	~Person();

	string toString();

private:
	int age;
	string name;
};

