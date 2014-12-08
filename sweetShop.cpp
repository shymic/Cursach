#pragma once
#include <string>
#include "sweetShop.h"
using namespace std;
const string fileMenu = "menu.txt";

void main()
{
	sweetShop shop = sweetShop();
}
sweetShop::sweetShop()
	{
		personal =vector<person>();
		menu = vector<dish>();
		initMenu();
	}

void initMenu()
{
	ifstream menuStream = ifstream(fileMenu);
	sweetShop::menu.push_back(dish(menuStream.));
}
person login(){
	string login, password;
	cout << "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	return person::autorize(login, password);
}
void sweetShop:: regNewPerson(person newPerson)
{
	sweetShop::getPersonal().push_back(newPerson);
	cout << " Singin is succesfull !"<< endl;
}

person singin(){
	string login, password, name, role;
	cout<< "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter role: ";
	getline(cin, role);
	sweetShop::regNewPerson(person(login, password, name));

