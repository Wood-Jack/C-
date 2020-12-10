#include <iostream>
#include "Inventory.h"


using namespace std;

/*--------------------------------------------------
 * Program Name: Inventory.cpp
 
 * Description: This program asks for an items number,cost,and quantity. The information is given by the user
 * the only can only take in three items currently. 

 * Programmer Name: Woodrow Jackson
 *-------------------------------------------------*/








int main() {
	
	double input1,input2;
	
	Inventory item1,item2,item3;
	
	
	cout<<" \n Welcome to Inventory Storage place \n";
	cout<<" \n you can place three items into storage enter to 0 to exit \n";
	
	cout<<" \n Creating Item Number 1 \n";
	cout<<"Please create an item number \n";
	
	//takes in user input and sets the item number form the user
	cin>>input1;
	item1.setItemNumber(input1);
	
	cout<<" Please enter quantity of item \n";
	
	//takes in user input and sets the quantity from the user
	cin>>input2;
	item1.setQuantity(input2);
	
	cout<<" Please enter cost of item \n";
	
	//takes in user input and sets the cost from the user
	cin>>input1;
	item1.setCost(input1);
	
	item1.setTotalCost(input1, input2);
	
	//For futue if more items are needed to be created within the program
	
		
	cout<<"Creating Item Number 2"
	cout<<"Please create an item number \n";
	
	cin>>input1;
	item2.setItemNumber(input1);
	
	cout<<" Please enter quantity of item \n";
	cin>>input2;
	item2.setQuantity(input2);
	
	cout<<" Please enter cost of item \n";
	cin>>input1;
	item2.setCost(input1);
	
	item2.setTotalCost(input1, input2);
	
	
	
	
	
	//Displays the whole overall data entered
	cout<<" \n Your item number is: \n"<<item1.getItemNumber();
	cout<<" \n Your quantity is: \n"<<item1.getQuantity();
	cout<<" \n Your cost is: \n"<<item1.getCost();
	
	cout<<" \n your Total cost: "<<item1.getTotalCost()<<"\n";
	
	cout<<" \n Added Total Cost:"<<item1.addTotalCost();
	
	
	
	return 0;
}
