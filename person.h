#pragma once;
#include <iostream>
#include <cstring>
using namespace std;
class person
{
private:
	int ID;
	string login;
	string name;
	string criptPassword;
	static int nextID;
	static string dataFileName;
protected:
	string role;
	

public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	person(string _login, string _password, string _name);
	person static autorize(string _login, string _password );
	string info();
	void addNote();
	void deleteNote(int noteID);
	static bool readData();
	static bool writeData();
	~person(){}

};
