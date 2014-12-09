#pragma once
#include <string>
#pragma once
#include <iostream>
#include "sweetShop.h"
using namespace std;

string sweetShop :: FILE_MENU = "menu.txt";

sweetShop::sweetShop()
{
	personal = vector<person>();
	personal = person::readData(this);
	menu = vector<dish>();
	initMenu();
}

void sweetShop::initMenu()
{

	ifstream menuStream = ifstream(FILE_MENU.c_str());
	string name, prise, str;
	while ( !menuStream.eof()){
		getline(menuStream, name);
		getline(menuStream, prise);
		sweetShop::menu.push_back(dish(name, atoi(prise.c_str())));
		getline (menuStream, str);
	}

}
person sweetShop::login(){
	string login, password;
	cout << "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	return autorize(login, password);
}
person sweetShop::regNewPerson(person newPerson){
	personal.push_back(newPerson);
	cout << " Singin is succesfull !"<< endl;
	return newPerson;
}

person sweetShop::sing_up(){
	string login, password, name, role;
	cout << "Enter name: ";
	getline(cin, name);
	cout<< "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	cout << "Enter role: ";
	getline(cin, role);
	if ( role.compare("admin")){
		return regNewPerson(admin( login, name, password, this));
	}else{
		return regNewPerson(user( login, name, password, this));
	}

	
}

