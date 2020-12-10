#include "Inventory.h"

		Inventory :: Inventory(){
			itemNumber=0;
			cost=0;
			quantity=0;
			
		} 


        int Inventory :: setItemNumber(int itemNum){
        	
        	itemNumber = itemNum;
        	
        	
		}
		double Inventory :: setQuantity(double q){
			
			quantity = q;
			
		}
		
		double Inventory :: setCost(double c){
			
			cost = c ;
		}
		
		
		int Inventory :: getItemNumber(){
			
			return itemNumber;
		}
		
		double Inventory :: getQuantity(){
			
			
			return quantity;
		}
		
		double Inventory :: getCost(){
			
			
			return cost ;
		}
		
		
		double Inventory :: setTotalCost(double num1, double num2){
			
			totalCost =  num1*num2;
			
			
			
		}
		
		// what to do whith setTotalCost 
		double Inventory :: addTotalCost(){
			
			totalCost += totalCost;
			
			return totalCost;
		}
		double Inventory :: getTotalCost(){
			
			
			return totalCost;
			
		}
