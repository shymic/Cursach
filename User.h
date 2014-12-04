#include <iostream>
#include <cstring>
using namespace std;
class User
{
private:
	int ID;
	string login;
	string name;
	string criptPassword;
	string role;
	static int nextID;
	static string dataFileName;
	

public:
	void setName(string newName){ name = newName; }
	string getName() { return name;	}
	User(string _login, string _password, string _name);
	bool autorize(string _login, string _password );
	string info();
	void addNote();
	void deleteNote(int noteID);
	static bool readData();
	static bool writeData();
	~User(){}

};
