#pragma once
#include "person.h"
#include "order.h"
class user : public person{
public:
	user(string _login, string _name,  string _password, string, sweetShop* shop) : person(_login, _name, _password, shop) { role ="user"; }
	void makeOrder(order order){
		shop -> addOrder(order);
	}
	~user(){}
};