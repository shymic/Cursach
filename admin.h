#pragma once;
#include "person.h"
#include <iostream>
using namespace std;
class admin:public person
{
public:
	 admin(string _login, string _name,  string _password, sweetShop shop) : person(_login, _name, _password, shop) { role ="admin"; }

	admin(int _ID, string _login, string _name,  string _password,  sweetShop shop) : person( _ID, _login, _name, _password, shop) { role ="admin"; }

	void showPersonList(){
		shop.showPersonal();
	}
	///////////////////////////////////////////
	//void bunPerson(person person);
};
