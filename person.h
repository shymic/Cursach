#pragma once;
#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;

const string usersFilename = "users.bin";

class person
{
private:
	int ID;
	string login;
	string name;
	string criptPassword;
	static int nextID;
	static vector<person> users;
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
	static bool readData()
	{
		users = vector<person>();
	}
	static bool writeData()
	{
		ofstream out = ofstream(usersFilename);
		for(int i=0; i < users.size(); ++i)
			out << users[i].ID << ";" << users[i].login.c_str() << ";" << users[i].name.c_str() << ";" << users[i].criptPassword.c_str() << ";" << users[i].role.c_str() << ";" << endl;
		out.close();
	}
	~person(){}

};
