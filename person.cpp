#pragma once
#include "person.h"
#include "sweetShop.h"
#include <vector>;
#include <string>

person::person(string _login, string _password, string _name, sweetShop *_shop)
{
	ID = nextID;
	login = _login;
	criptPassword = encrypt(_password);
	name = _name;
	nextID++;
	shop = _shop;
}

person::person( string infoLine){
 
}

string person::info(){
	string info = to_string(ID);
	info +=" " + name +" "+ login +" " + criptPassword +" "+ role;
	return info;
}

void person:: readData()
{
	
}

void person:: writeData()
{
	vector<person> personal = shop.getPersonal();
	ofstream out = ofstream(personsFilename);
	for(int i=0; i <personal.size(); ++i)
		out << personal[i].getID()<< ";" << personal[i].getLogin().c_str()<< ";"
		<< personal[i].getName.c_str() << ";" << personal[i].getPassword.c_str() << ";" << personal[i].getRole.c_str() << ";" << endl;
	out.close();
}
