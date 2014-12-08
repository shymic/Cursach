#pragma once
#include "admin.h"
#include "person.h"
#include "user.h"
#include "dish.h"
#include <vector>;

const string personsFilename = "persons.txt";

class sweetShop{
public:
	static vector<person> personal;
	static vector<dish> menu;

	sweetShop();

	vector<person> getPersonal(){ return personal;}
	vector<dish> getMenu(){ return menu;}

	void static regNewPerson(person newPerson);

	~sweetShop(){};

	 

	
};