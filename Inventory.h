



#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory{
	
	private:
		int itemNumber;
		double quantity;
		double cost;
		double totalCost;
		
		
	public:
		Inventory ();
		int setItemNumber(int itemNum);
		double setQuantity(double q);
		double setCost(double c );
		double setTotalCost(double num1, double num2);
		double addTotalCost();
		
		
		int getItemNumber();
		double getQuantity();
		double getCost();
		double getTotalCost();
	
	
	
	
	
	
	
};

#endif
