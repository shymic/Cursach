#include <iostream>
#include <string>
#include "User.h"
using namespace std;

void main(){
	string login, password;
	cout << "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
}

User login(){
	string login, password;
	cout << "Enter login: ";
	getline(cin, login);
	cout << "Enter password: ";
	getline(cin, password);
	return User::autorize(login, password);
}