# include <iostream>
# include <string>
using namespace std;


/********
*Program Name: Interview.cpp

*Programmer Name: Woodrow Jackson

*Description: This is a program that interviews student 
within the classroom.

* Modified: 2/1/2020
********************/
	int main()
	{
		//intializes and declare variables used in the statement 
		string name,movie,food;
		int semesterClass,age,month,day,year;
		float credits;
		
		// Asks student name and takes in and stores string in name
		cout<<"Please enter Student Name:";
		getline(cin,name);
		
		// Asks input for DOB takes and stores int for variables month,day,and year.
		cout<<"Please enter Date of Birth, example:3 4 93: NO SLASHES & SPACE NUMBERS ";
		cin>>month>>day>>year;
		
		
		
		// Asks input for age takes an int and stores in age variable
		cout<<"Please enter Student Age:";
		cin>> age;

		// Takes in input for a int and stores in semesterClass variable.
		cout<<"Please enter How many clases you "
			<< "are taking this semester: ";
			cin>>semesterClass;
		
		// Takes input for a float and stores it into credits variable
		cout<<"How many credits do you need to graduate: ";
		cin>> credits;
		
		// Asks input for favorite Movie and takes in string stores in movie variable
		cout<<"Favorite Movie:";
		cin.ignore();
		getline(cin,movie);
		
		// Asks input for food stores string in food variable
		cout<< "Favorite Food:";
	    getline(cin, food);
	
	cout<<"INTERVIEWEES PROFILE \n";
	
	// Displays all of the students information line by line like a student ID.
	cout<<" Student name:"<<name<<"\n Date of Birth "<<month<<'/'<<day<<'/'<<year<<"\n Student Age: "<<age<<"\n No. of classes:"
		<<semesterClass<<"\n Credits needed to graduate:"<<credits<<"\n Favorite Movie: "
		<<movie<<"\n Favorite Food:"<<food<<"."<<endl;
	
	
	
	return 0;
	
	}
