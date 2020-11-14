#include <iostream>

/*--------------------------------------------------
 * Program Name: ExtraCredit.cpp
 * Description: A program gets average of test scores 
 * Programmer Name:  Woodrow Jackson 
 * Modified: 04/6/20
 *-------------------------------------------------*/


using namespace std;

void getScore( int testScore1, int testScore2,int testScore3,int testScore4,int testScore5){
	if(testScore1 <1 && testScore1 > 100){
		
		cout<<"Score doesnt exist \n";
		
	}
	if(testScore2 <1 && testScore2 > 100){
		
		cout<<"Score doesnt exist \n";
		
	}
	if(testScore3 <1 && testScore3 > 100){
		
		cout<<"Score doesnt exist \n";
		
	}
	if(testScore4 <1 && testScore4 > 100){
		
		cout<<"Score doesnt exist \n";
		
	}if(testScore5 <1 && testScore5 > 100){
		
		cout<<"Score doesnt exist \n";
		
	}
	
	cout<<"Your score for test 1 "<<testScore1<<"\n";
	cout<<"Your score for test 2 "<<testScore2<<"\n";
	cout<<"Your score for test 3 "<<testScore3<<"\n";
	cout<<"Your score for test 4 "<<testScore4<<"\n";
	cout<<"Your score for test 5 "<<testScore5<<"\n";
	
}

void calcAverage(int score1, int score2,int score3,int score4,int score5){ 
int average = (score1+score2+score3+score3+score4+score5)/5;

	cout<<"your average is: "<< average<< " \n" ;
}

int findLowest(int low1,int low2,int low3,int low4,int low5){
	
	int test;
        if ( low1 < low2 && low1 < low3 && low1 < low4 && low1 < low5 )
        {
            test = low1;
            cout << "The lowest score is " <<test <<endl;
        }
        else if ( low2 < low1 && low2 < low3 && low2 < low4 && low2 < low5)
        {
            test = low2;
            cout << "The lowest score is " <<test <<endl;
        }
        else if ( low3 < low1 && low3 < low2 && low3 < low4 && low3 < low5)
        {
            test = low3;
            cout << "The lowest score is " <<test <<endl;
        }
        else if ( low4 < low1 && low4 < low3 && low4 < low2 && low4 < low5)
        {
            test = low4;
            cout << "The lowest score is " <<test <<endl;
        }
        else if ( low5 < low1 && low5 < low3 && low5 < low4 && low5 < low2)
        {
            test = low5;
            cout << "The lowest score is " <<test <<endl;
        }
	
}

	int main()
	{
		int input1, input2,input3,input4,input5;
		cout<<"Please enter your test scores \n";
		cin>>input1>>input2>>input3>>input4>>input5;
	    getScore(input1, input2,input3,input4,input5);
	    calcAverage(input1, input2,input3,input4,input5);
	    findLowest(input1, input2,input3,input4,input5);
		
	
	}
