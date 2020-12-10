#include <iostream>

/*--------------------------------------------------
 * Program Name: HotelOcp.cpp
 * Description: The program gives you hotel floor selection between floor 10 and 16.
 The suites are not allowed to be less than 0 or greater than 20 on each floor.  
 * Programmer Name: Woodrow Jackson
 * Modified: 03/23/20
 *-------------------------------------------------*/




using namespace std;
int main(){
	
	//Total occupancy
	const int occupancy= 120 ; 
	
	//Hotel Floor
	int floors;
	
	//suites per floor	
	int suitesPerFloor;
	//total suites
	int totalSuites;
	//percantage of suites occupied
	double numberOfSuites;
	
	cout<<"Good day welcome to The Great Day Hotel ";
	
	// A loop that loops each floor between 10 and 16
	for(floors = 10 ; floors< 16; floors++)
	{
		if(floors == 13)
		{
			continue;
		}
		
		//goes through each floor 10 through 16 till the floors are filled with a number
		do
		{
			cout<<"Hotel Occupancy \n";
			cout<<"How many suites are occupied on the "<<floors<<"th floor?";
			cin>>suitesPerFloor;
			
			if(suitesPerFloor<0 || suitesPerFloor > 20)
			{
				cout<<"\n Incorrect suite amount";
				cout<<"\n Number of suites must be greater than zero and less than 20";	
			}
			
		}while(suitesPerFloor<0 || suitesPerFloor > 20);
		
		totalSuites = totalSuites + suitesPerFloor;
	}
	
	numberOfSuites = (static_cast<double>(totalSuites)/suitesPerFloor)*100;
	
	//Shows how many suites the hotel has , how many of them are occupied
	// what percentage of them are occupied

	cout<<"\n Total number of suites in the hotel: "<< occupancy;
	cout<<"\n Total number of suites occupied  :"<<totalSuites;	
	cout<<"\n Percentage of suites occuped :"<<numberOfSuites;
	
	return 0;
}
