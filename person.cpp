#pragma once
#include "person.h"
#include "sweetShop.h"
#include <vector>;
#include <string>

person::person(string _login, string _password, string _name, sweetShop _shop)
{
	ID = nextID;
	login = _login;
	criptPassword = person::encrypt(_password);
	name = _name;
	nextID++;
	shop =_shop;
}

person::person(int _ID, string _login, string _password, string _name, sweetShop _shop)
{
	ID = _ID;
	login = _login;
	criptPassword = encrypt(_password);
	name = _name;
	shop = _shop;
	if ( ID+1 > nextID){
		nextID = ID+1;
	}
}

person::person(){};

string person::info(){
	string info = to_string(ID);
	info +=" " + name +" "+ login +" " + criptPassword +" "+ role;
	return info;
}



