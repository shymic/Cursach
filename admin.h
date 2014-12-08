#pragma once;
#include "person.h"
class admin:private person
{
public:
	admin(string _login, string _name,  string _password, string ) : person(_login, _name, _password) { role ="admin"; }
	void showPersonList();
	void bunPerson(int personId);
	~admin(){};
};
