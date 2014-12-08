#pragma once
#include <string>
#pragma once
#include <iostream>
#include "sweetShop.h"
using namespace std;

string sweetShop :: FILE_MENU = "menu.txt";

sweetShop::sweetShop()
{
	personal =vector<person>();
	menu = vector<dish>();
	initMenu();
}

void sweetShop::initMenu()
{
	ifstream menuStream = ifstream(FILE_MENU.c_str());
	sweetShop::menu.push_back(dish(menuStream.getline));
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
	return regNewPerson(person(login, password, name, this));
}

