#pragma once
#include "admin.h"
#include "person.h"
#include "user.h"
#include "dish.h"
#include <vector>;
#include <queue>

const string personsFilename = "persons.txt";

class sweetShop{
private:
	static string FILE_MENU;
	void initMenu();
	vector<person> personal;
	vector<dish> menu;
	queue<order> orders;
public:
	sweetShop();
	person login();
	person sing_up();

	vector<person> getPersonal(){ return personal;}
	vector<dish> getMenu(){ return menu;}

	void showMenu(){
		for (int i = 0; i < menu.size(); ++i){
			cout << menu[i].getInfo() << endl;
		}
	}

	void showPersonal(){
		for (int i = 0; i < personal.size(); ++i){
			cout << personal[i].info() << endl;
		}
	}

	
	person getPersonByID(int _Id){
		for ( int i = 0; i < personal.size(); ++i){
			if ( personal[i].getID() == _Id)
				return personal[i];
		}
		throw "Unknown ID";
	}

	person regNewPerson(person);

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