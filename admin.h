#include "person.h"
#include <iostream>

class admin:public person
{
public:
 admin(string _login, string _name,  string _password) : person(_login, _name, _password) { role ="admin"; }

	admin(int _ID, string _login, string _name,  string _password) : person( _ID, _login, _name, _password) { role ="admin"; }

	///////////////////////////////////////////
	//void bunPerson(person person);
};
