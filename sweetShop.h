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

	 bool readData()
	{

	}
	bool writeData()
	{
		ofstream out = ofstream(personsFilename);
		for(int i=0; i < personal.size(); ++i)
			out << personal[i].getID()<< ";" << personal[i].getLogin().c_str()<< ";"
			<< personal[i].getName.c_str() << ";" << personal[i].getPassword.c_str() << ";" << personal[i].getRole.c_str() << ";" << endl;
		out.close();
	}


	
};