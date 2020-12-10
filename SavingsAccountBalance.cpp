#include <iostream>
#include <iomanip>

/*--------------------------------------------------
 * Program Name: SavingsAccountBalance.cpp
 * Description: A program that calculates the interests of a banking account
 of with deposits and withdrawals 
 * Programmer Name: Woodrow Jackson
 * Modified: 03/20/20
 *-------------------------------------------------*/

using namespace std;

	int main(){
	
		//variables 
		double accountBalance= 0;
		double withdrawal;
		double totalDeposit,totalBalance,totalInterest,totalWithdrawal;
		double const rate =.10;
		double deposit;
		double monthlyRate;
		int months;
		
		cout<<"Welcome To Great Great Bank \n ";
		
		cout<<"Current Account Balance: "<<accountBalance<<" \n";
		cout<<"Monthly Interest Rate 10% \n"; 
		
		//Asks user of account Balance
		cout<<"Please enter the amount you are depositing in your account ";
		cin>>accountBalance;
		
		//calculate monthlyRate
		monthlyRate = rate/12;
		
		//Asks how many months passed
		cout<<"\n How many months passed?";
		cin>>months;
		
		
		totalBalance= accountBalance;
		
		// initiates each month in a for loop until all months are completed
		for(int i =1 ; i<= months;i++)
		{
			// which number month the user is in
			cout<<"Month: "<<i<<endl;
			
			//Asks for user input for deposit
			cout<<"Total Deposits of this month:\n";
			cin>>deposit;
			
			// takes depoisit and adds to the total deposit and balance
			totalDeposit = totalDeposit+deposit;
			totalBalance = totalBalance+deposit;
			
			//asks for user input for the withdrawal
			cout<<"Total withdrawl for this month: \n";
			cin>>withdrawal;
			
			//Adds withdrawal it adds the total of withdrawals
			totalWithdrawal = totalWithdrawal+withdrawal;
			
			//calculates the total interest and balance 
			totalInterest+= (totalBalance*monthlyRate);
			totalBalance += (totalBalance*monthlyRate);
			
			// An if statement that make sure all the numbers for deposits,withdrawal,and total Balance are Positive
			if(deposit< 0|| withdrawal < 0 || totalBalance < 0)
			{
				cout<<"Only Positive Numbers";
			}
			
		}
		
		//Displays all information total of all the months
		cout<<"\n Starting Balance :"<<accountBalance;
		cout<<"\n Ending Balance :"<<totalBalance;
		cout<<"\n Amount of Deposits : "<<totalDeposit;
		cout<<"\n Amount of Withdrawals : "<<totalWithdrawal;
		cout<<"\n Amount of interest earned :"<<totalInterest;
		
		return 0;
	}
		
		
	
