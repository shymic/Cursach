#pragma once
#include "person.h"
class user : public person{
public:
	user(string _login, string _name,  string _password, string ) : person(_login, _name, _password) { role ="user"; }
	~user(){};
};