#include <iostream>
using namespace std;
class dish{
private:
	static int menuID;
	int ID;
	string name;
	int prise;
public:
	dish(string, int);
	string getName();
	int getPrise();
	string getInfo();
	~dish();

};