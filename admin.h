#pragma once;
#include "person.h"
class admin:private person
{
public:
	admin(string _login, string _name,  string _password, string, sweetShop* shop) : person(_login, _name, _password, shop) { role ="admin"; }
	void bunPerson(person person);
	~admin(){};
};
