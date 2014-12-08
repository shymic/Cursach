#pragma once
#include "dish.h"

int dish::menuID = 0;

dish::dish(string _name, int _prise){
	ID = menuID++;
	name = _name;
	prise = _prise;
}
string dish:: getName(){ return name; }

int dish:: getPrise(){ return prise; }

string dish:: getInfo()
{
	string info = "name:"; 
	info.append( name);
	info.append(" prise: ");
	info += prise;
	return info;
}


dish::~dish(){
	menuID--;
}