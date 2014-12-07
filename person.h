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
	sweetShop* shop;
	static int nextID;
protected:
	string role;
	

public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	int getID() { return ID;	}
	string getLogin() { return login;	}
	string getPassword() { return criptPassword;	}
	string getRole() { return role;	}

	person(string, string, string, sweetShop*);
	person (string);


	person static autorize(string, string);
	string info();


	void addNote();
	void deleteNote(int noteID);
	
	~person(){}

};
