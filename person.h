#pragma once;
#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;

class person
{
private:
	int ID;
	string login;
	string name;
	string criptPassword;
	static int nextID;
protected:
	string role;
	sweetShop* shop;
	
public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	int getID() { return ID;	}
	string getLogin() { return login;	}
	string getPassword() { return criptPassword;	}
	string getRole() { return role;	}

	person(string, string, string, sweetShop*);
	person (string);

	static string encrypt(string password){
		reverse( password.begin(), password.end());
		return password;
	}

	string info();

	void writeData();
	void readData();

	void addOrder();
	void deleteOrder(int orderID);
	
	~person(){}

};
