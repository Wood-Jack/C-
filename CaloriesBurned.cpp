#include <iostream>



/*--------------------------------------------------
 * Program Name: Membership.cpp
 * Description: A program calculates calories burned by increments of 5 
 * Programmer Name:  Woodrow Jackson 
 * Modified: 03/31/20
 *-------------------------------------------------*/

using namespace std;

int main()
{
	const int caloriesBurnedPerMin = 3.9;
	
	int calorieBurned;
	
	for(int i =5; i<= 30; i += 5)
	{
		calorieBurned =(i* caloriesBurnedPerMin);
		cout<<"Caloreis burned "<< i <<"\n Minutes = "<<calorieBurned;
	}
	return 0;
	
	
	
}
