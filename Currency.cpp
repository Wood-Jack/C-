#include <iostream>

/*--------------------------------------------------
 * Program Name: testscoreaverage.cpp
 
 * Description: A program calculates and displays how much money needs to be given to a person
 * and splits it into 500,100,50,20,10, and 5's
 *-------------------------------------------------*/





using namespace std;

int main()
{
	//creating variables 
	int currency;
	int counter=0,counter2=0,counter3=0,counter4=0,counter5=0,counter6=0,counter7=0;
	cout<<"How much money is needed ";
	cin>>currency;
	
	// loop to check if number values go into the currency number created
	if(currency >= 500)
	{
		while(currency >= 500)
		{
		currency =currency - 500;
		counter++;
		}
	}
	if(currency >= 100)
	{
		while(currency>= 100)
		{
		currency = currency-100;
		counter2++;
		}
	}
	if(currency >= 50)
	{
		while(currency >= 50)
		{
		currency = currency-50;
		counter3++;
	}
	}
	if(currency >= 20)
	{
		while(currency >= 20){
		currency = currency-20;
		counter4++;
	}
    }
	if(currency >= 10)
	{
		while (currency >= 10)
		{
		currency = currency-10;
		counter5++;
		}
	}
	if(currency >= 5)
	{
		while(currency >= 5){
		
		currency = currency - 5;
		counter6++;
	}
	}
	 if (currency >= 1)
	{
		while(currency >= 1)
		{
		
		currency = currency -1;
		counter7++;
	}
	}
	cout<<"500: "<<counter<<"\n 100: "<<counter2<<" \n 50 :"<<counter3<<" \n 20 :"<<counter4<<" \n 10 :"<<counter5<<" \n 5: "<<
	counter6<<" \n 1 :"<<counter7;
}
