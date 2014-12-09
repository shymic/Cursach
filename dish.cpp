/*#pragma once
#include "dish.h"
#include <string>

int dish::menuID = 0;

dish::dish(string _name, int _prise){
	ID = menuID++;
	name = _name;
	prise = _prise;
}
string dish:: getName(){ return name; }

int dish:: getPrise(){ return prise; }

int dish:: getID(){ return ID; }

string dish:: getInfo()
{
	string info = to_string(ID);
	info += " " + name + " " += prise + " ";
	return info;
}

dish::~dish(){
	menuID--;
}*/