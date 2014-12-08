#pragma once;
#include "person.h"
#include <iostream>

class admin:public person
{
public:
	admin(string, string,  string, sweetShop );
	admin(int, string, string,  string,  sweetShop );
	void showPersonList(); 
	///////////////////////////////////////////
	//void bunPerson(person person);
};
