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
	

public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	int getID() { return ID;	}
	string getLogin() { return login;	}
	string getPassword() { return criptPassword;	}
	string getRole() { return role;	}

	person(string _login, string _password, string _name);
	person (string infoLine);


	person static autorize(string _login, string _password );
	string info();


	void addNote();
	void deleteNote(int noteID);
	
	~person(){}

};
