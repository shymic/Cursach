#include <iostream>
#include <string>
#include "person.h"
using namespace std;

void main(){
}

person login(){
	string login, password;
	cout << "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	return person::autorize(login, password);
}
