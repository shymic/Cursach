#pragma once;
#include <iostream>
using namespace std;
class dish{
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