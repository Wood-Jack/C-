#include <iostream>
#include <iomanip>


using namespace std;
/*--------------------------------------------------
 * Program Name: PennyPay.cpp
 * Description: A program that calculates each day and money is made each day.
 money is doubled each day
 * Programmer Name:  Woodrow Jackson 
 * Modified: 04/6/20
 *-------------------------------------------------*/


/*
 Function  displays day and doubles each day of pay 

*/

 int pennyAdd(double num ,int day)
 {
 	 
 	if(num > 1 && day >1 ){
 		
	 
	for(int i =1 ; i <= day; i++)
	{ 
		cout<<"\n Day :"<<i;
		cout<<" Pay :"<<num<<fixed<<setprecision(2);
		 num = num * 2;
		
	 }
	
	 double total = day * num;
	 cout<<"\n Total month Pay: "<< total;
 	
 	
 	
    }
    else if( num == 1 && day == 1 || num <1 && day <1)
    {
    	num = num + 0;
    	day= day + 0;
    	cout<<"Plese enter numbers greeater than 1 \n";
	}
	else
	{
		cout<<"Plese enter numbers greater than zero \n";
		
	}

	 
 }
 
 
 	
 
 
 /*
 * Function that totalized days worked 
 */

int main(){
	
	double input1;
	double input2;
	

	
	cout<<"Please enter how much you made  \n";
	cin>>input1;
	cout<<"please enter how many days you worked \n";
	cin>> input2;
	pennyAdd(input1,input2);
	
	
	
}
