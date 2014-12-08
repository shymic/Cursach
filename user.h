#include "person.h"
#include "order.h"

class user : public person{
public:

	user(string _login, string _name,  string _password) : person(_login, _name, _password) { role ="user"; }
	user(int _ID, string _login, string _name,  string _password) : person(_ID, _login, _name, _password) { role ="user"; }
	////////////////////////////
	int orderPrise(order order);
	~user(){}
};