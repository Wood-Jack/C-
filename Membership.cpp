#include <iostream>


/*--------------------------------------------------
 * Program Name: Membership.cpp
 * Description: A program calculates membership of with a for loop with the number of years
 * Programmer Name:  Woodrow Jackson 
 * Modified: 03/31/20
 *-------------------------------------------------*/

using namespace std;


int main()
{
	double yearMembership = 2500;
	
	double percent = 0.04;
	
	int years;
	
	for(years =1; years <= 6 ; years++)
	{
		
		yearMembership = yearMembership + (yearMembership * percent);
		
		cout<<"\n Year: "<< years << " \n Price :" << yearMembership;
		
		
	}
	return 0;	
	
}
