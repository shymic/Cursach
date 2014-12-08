#pragma once
#include "person.h"
#include "sweetShop.h"
#include <vector>;
#include <string>

person::person(string _login, string _password, string _name)
{
	ID = nextID;
	login = _login;
	criptPassword = encrypt(_password);
	name = _name;
	nextID++;
}

person::person( string infoLine){
 
}

person static::autorize(string _login, string _password )
{
	vector<person> vect = sweetShop::personal;
	for ( int i = 0; i < vect.size(); ++i)
	{
		if( _login.compare(vect[i].getLogin) && encrypt(_password).compare(vect[i].getPassword))
		{
			return vect[i];
		}
		else 
			return ;
	}
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


string encrypt(string password)
{
	reverse( password.begin(), password.end());
	return password;
}