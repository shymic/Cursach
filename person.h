#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include "sweetShop.h"
using namespace std;

class person{
private:
	int ID;
	string login;
	string name;
	string criptPassword;
	static int nextID;

protected:
	string role;
	sweetShop shop;

public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	int getID() { return ID;	}
	string getLogin() { return login;	}
	string getPassword() { return criptPassword;	}
	string getRole() { return role;	}

	person(string _login, string _password, string _name, sweetShop _shop)
	{
		ID = nextID;
		login = _login;
		criptPassword = person::encrypt(_password);
		name = _name;
		nextID++;
		shop =_shop;
	}

	person(int _ID, string _login, string _password, string _name, sweetShop _shop)
	{
		ID = _ID;
		login = _login;
		criptPassword = encrypt(_password);
		name = _name;
		shop = _shop;
		if ( ID+1 > nextID){
			nextID = ID+1;
		}
	}

	person(){}

	string info(){
		string info = to_string(ID);
		info +=" " + name +" "+ login +" " + criptPassword +" "+ role;
		return info;
	}

	person operator = (person _person){
		person pers = person(_person.getID(), _person.getLogin(), _person.getName(), _person.getPassword(), _person.shop);
		return pers;
	}

	static string encrypt(string password){
		reverse( password.begin(), password.end());
		return password;
	}

	void writeData()
	{
		vector<person> personal = shop.getPersonal();
		ofstream out = ofstream(personsFilename);
		for(int i=0; i <personal.size(); ++i)
			out << personal[i].getID()<< endl << personal[i].getLogin().c_str()<< endl
			<< personal[i].getName.c_str() << endl << personal[i].getPassword.c_str() << endl << personal[i].getRole.c_str() << endl << "/" << endl;
		out.close();
	}

	vector<person>  readData(sweetShop _shop){
		ifstream in = ifstream(personsFilename);
		string id, login, name, password, role, str;
		vector<person> personal = vector<person>();
		while (!in.eof()){
			getline(in, id);
			getline(in, login);
			getline(in, name);
			getline(in, password);
			getline(in, role);
			if ( role.compare("admin")){
				personal.push_back(admin(atoi(id.c_str()), login, name, password, _shop));
			}else{
				personal.push_back(user(atoi(id.c_str()), login, name, password, _shop));
			}
			getline(in, str);
		}
		in.close();
		return personal;
	}

	~person(){
		nextID--;
	}
};
