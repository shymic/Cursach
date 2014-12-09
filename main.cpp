#include <iostream>
#include <string>
#include "person.h"
#include "sweetShop.h"
using namespace std;

void main(){
	try{
		int i = 0;
		sweetShop testShop = sweetShop();
		person customer;
		while ( true) {
			cout << "1. Login"<< endl;
			cout << "2. Sign up"<< endl;
			cout << "0. exit"<< endl;
			cin >> i;
			switch (i)
			{
				case 1:	customer = testShop.login();break;
				case 2: customer = testShop.sing_up();break;
				case 0: return;
			}
			if(customer.getRole().compare("admin")){
				//////////////////////////////////////////////
				admin adminCustomer = admin(customer.getID(), customer.getLogin(), customer.getName(), customer.getPassword(), testShop);
				cout << "1. Show personal list"<< endl;
				cout << "2. Bun person"<< endl;
				cout << "0. exit"<< endl;
				cin >> i; 
				switch (i)
				{
					case 1:	adminCustomer.showPersonList();break;
					case 2: {
							cout << "Choose person, who must be bun"<< endl;
							adminCustomer.showPersonList();
							int bunID;
							cin >> bunID;  
							//adminCustomer.bunPerson(testShop.getPersonByID(bunID));break;
							}
					case 0: return;
				}
			}
			else{
				//////////////////////////////////////
				user userCustomer = user(customer.getID(), customer.getLogin(), customer.getName(), customer.getPassword(), testShop);;
				cout << "1. Watch menu"<< endl;
				cout << "2. Make order"<< endl;
				cout << "3. Show order prise"<< endl;
				cout << "0. exit"<< endl;
				cin >> i; 
				switch (i)
				{
					case 1:	testShop.showMenu();break;
					case 2: {
						order choosenOrder = order();
						int dishID;
						cout << "Choose ID dishies which you want:" << endl;
						testShop.showMenu();
						cout << " -1. nothing more"<< endl;
						while(dishID != -1){
							cin >> dishID;
							choosenOrder.add_dish((dish)testShop.getDishByID(dishID));
						}
						choosenOrder.show();
						int accept;
						cout << "1. Yes" << endl;
						cout << "2. Add dishies" << endl;
						cin >> accept;
						switch (accept){
							case 1:break;
							case 2:{
									testShop.showMenu();
									cout << " -1. nothing more"<< endl;
									while(dishID != -1){
										cin >> dishID;
										choosenOrder.add_dish(testShop.getDishByID(dishID));
									}
									choosenOrder.show();break;
							 }

						}

						choosenOrder.inprogress();
						userCustomer.makeOrder(choosenOrder);break;
					}
					case 3: {
						
					}

					case 0: return;
				}
			}


		}
	}
	catch( char* str){
		cout << str << endl;
	}
}

