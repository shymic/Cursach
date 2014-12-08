#pragma once
#include <vector>
#include "dish.h"
enum order_type{
	CLOSED, OPEN, INPROGRESS
};

class order{
private:
	order_type type;
	vector<dish> items;
public:
	order(vector<dish> _items){
		type = OPEN;
		items = _items;
	}

	order(){
		type = OPEN;
		items = vector<dish>();
	}

	void add_dish(dish d){
		items.push_back(d);
	}

	void close(){
		type = CLOSED;
	}

	void inprogress(){
		type = INPROGRESS;
	}

	void show(){
		string str = "Type: ";
		str.append(type_to_s());
		str.append("/n");
		for (int i = 0; i < items.size; ++i){
			str += i;
			str.append(") ");str.append(items[i].getInfo());
			str.append("\n");
		}
	}

	string type_to_s(){
		switch (type){
		case OPEN:
			return "OPEN";
		case CLOSED:
			return "CLOSED";
		case INPROGRESS:
			return "IN PROGRESS";
		default:
			return "UNKNOWN";
		}
	}
};
