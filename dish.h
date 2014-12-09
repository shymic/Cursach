#pragma once;
#include <iostream>
#include <string>
using namespace std;

class dish{
<<<<<<< HEAD
	private:
		static int menuID ;
		int ID;
		string name;
		int prise;
	public:	
		
			dish(string _name, int _prise){
				menuID = 0;
				ID = menuID++;
				name = _name;
				prise = _prise;
			}
			string  getName(){ return name; }

			int  getPrise(){ return prise; }

			int  getID(){ return ID; }

			string getInfo()
			{
				string info = to_string(ID);
				info += " " + name + " " += prise + " ";
				return info;
			}

			~dish(){
				menuID--;
			}

};
=======
private:
	static int menuID;
	int ID;
	string name;
	int prise;
public:

	dish(string _name, int _prise){
		ID = menuID++;
		name = _name;
		prise = _prise;
	}
	string  getName(){ return name; }

	int getPrise(){ return prise; }

	int getID(){ return ID; }

	string getInfo()
	{
		string info = to_string(ID);
		info += " " + name + " " += prise + " ";
		return info;
	}

	~dish(){
		menuID--;
	}

};

int dish::menuID = 0;
>>>>>>> bf57a03436502c861a6a17434dff7b9ba12fbb42
