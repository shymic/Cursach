#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include "admin.h"
#include "user.h"
#include "dish.h"
#include "person.h"
using namespace std;

const string personsFilename = "persons.txt";
const string  FILE_MENU = "menu.txt";


class sweetShop{

private:
	vector<person> personal;
	vector<dish> menu;
	queue<order> orders;
public:

	sweetShop()
	{
		personal = vector<person>();
		//personal = person::readData(*this);
		menu = vector<dish>();
		initMenu();
	}

	void initMenu()
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
	person login(){
		string login, password;
		cout << "Enter login: ";
		getline(cin, login);
		cout << "Enter password: ";
		getline(cin, password);
		return autorize(login, password);
	}
	person regNewPerson(person newPerson){
		personal.push_back(newPerson);
		cout << " Singin is succesfull !"<< endl;
		return newPerson;
	}
	person sing_up(){
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
			return regNewPerson(admin( login, name, password));
		}else{
			return regNewPerson(user( login, name, password));
		}


	}
	vector<person> getPersonal(){ return personal;}
	vector<dish> getMenu(){ return menu;}

	void showMenu(){
		for (int i = 0; i < menu.size(); ++i){
			cout << menu[i].getInfo().c_str() << endl;
		}
	}
	void showPersonal(){
		for (int i = 0; i < personal.size(); ++i){
			cout << personal[i].info().c_str() << endl;
		}
	}
	person getPersonByID(int _Id){
		for ( int i = 0; i < personal.size(); ++i){
			if ( personal[i].getID() == _Id)
				return personal[i];
		}
		throw "Unknown ID";
	}
	dish getDishByID(int _Id){
		for ( int i = 0; i < menu.size(); ++i){
			if ( menu[i].getID() == _Id)
				return menu[i];
		}
		
		throw "Unknown ID";
	}
	void addOrder(order order){
		orders.push(order);
	}
	person autorize(string _login, string _password ){
		for ( int i = 0; i < personal.size(); ++i) {
			if( _login.compare(personal[i].getLogin()) && person::encrypt(_password).compare(personal[i].getPassword())) 
				return personal[i];
		}
		throw "Autorization error!";
	}
};

