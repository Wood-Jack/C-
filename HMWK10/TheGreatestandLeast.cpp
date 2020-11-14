#include <iostream>



/*--------------------------------------------------
 * Program Name: theGreatestandLeast.cpp
 * Description: A program that calculates greatest and least row of numbers 
 * Programmer Name:  Woodrow Jackson 
 * Modified: 04/6/20
 *-------------------------------------------------*/

using namespace std;




int main(){
	int smallNum, bigNum ;

	
	int input1;
	cout<<"please enter numbers: \n" <<"number equaling -99 will exit the program \n";
	cin>>input1;

	smallNum = input1;
	bigNum = input1;
	
	while (input1 != -99)
	{
		cin>>input1;
		if(smallNum > input1)
		{ 
			smallNum = input1;
			cout<<"im the problem \n";
		}
		if(input1 > bigNum)
		{
			bigNum = input1;
			cout<<"im the problem \n";
		}
		
	
	
		
	
	}
	
	cout<<"Small Number : \n"<<smallNum;
	cout<<" \n Big Number : \n"<< bigNum;
	
	
	cout<<" \n Program Has Ended";
	
 
}
