#include <iostream>

/********
*Program Name: SoftwareSales.cpp

*Programmer Name: Woodrow Jackson

*Description: This is a program that gives discount to a 
number of packages the user has ordered

* Modified: 2/28/2020
********************/



using namespace std;

	int main()
	{
		const double package =99.00;
		int packageOrder;
		double packageAmount,discount;
		
		do
		{
		
		cout<<"Please enter the number of packages wanted take in consideration our speacial deals"<<
		" to EXIT press ZERO";
		
		cout<<" \n Order: 10 - 19 pacakages Discount: 20%";
		
		cout<<" \n Order: 20 - 49 pacakages Discount: 30%";
	
		cout<<" \n Order: 50 - 99 pacakages Discount: 40%";
	
		cout<<" \n Order: 100 or more  pacakages Discount: 50%"<<endl;
		
		cin>>packageOrder;
		packageAmount= packageOrder*package;
		
	
		
		if(packageOrder < 10)
		{
			cout<<"Your Total Amount is : "<< packageAmount<<"\n ";
		}
		if(packageOrder >= 10 && packageOrder <=19 )
		{
			discount = packageAmount * .8;
			
			cout<<"\n Your Total Amount: "<< discount;
			
		}
		if(packageOrder >= 20 && packageOrder <=49 )
		{
			discount = packageAmount * .7;
			
			cout<<"\n Your Total Amount: "<< discount;
			
		}
		if(packageOrder >= 50 && packageOrder <=99 )
		{
			discount = packageAmount * .6;
			
			cout<<"\n Your Total Amount: "<< discount;
			
		}
		
			if(packageOrder >= 100 )
		{
			discount = packageAmount * .5;
			
			cout<<"\n Your Total Amount: "<< discount;
			
		}
	}
		while(packageOrder != 0);
			cout<<" \n Program ending...";
			return 0;
		
	
		
}
