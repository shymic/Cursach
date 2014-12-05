#pragma once
#include "person.h"

person::person(string _login, string _password, string _name)
{
	login = _login;
	criptPassword = encrypt(_password);
	name = _name;
}

person static::autorize(string _login, string _password )
{
	

}

string encrypt(string password)
{
	reverse( password.begin(), password.end());
	return password;
}