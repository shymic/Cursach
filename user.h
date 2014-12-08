#pragma once
#include "person.h"
class user : public person{
public:
	user(string _login, string _name,  string _password, sweetShop* shop) : person(_login, _name, _password, shop) { role ="user"; }
	user(int _ID, string _login, string _name,  string _password, sweetShop* shop) : person(_ID, _login, _name, _password, shop) { role ="user"; }
	void makeOrder(){}
	~user(){}
};