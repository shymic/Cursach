#pragma once;
#include "person.h"
#include "sweetShop.h"

admin:: admin(string _login, string _name,  string _password, sweetShop shop) : person(_login, _name, _password, shop) { role ="admin"; }

admin::admin(int _ID, string _login, string _name,  string _password,  sweetShop shop) : person( _ID, _login, _name, _password, shop) { role ="admin"; }

void showPersonList(){
	shop.showPersonal();
}