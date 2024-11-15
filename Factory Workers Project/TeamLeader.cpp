//This is the ccp file for the TeamLeader Class

#include <iostream>
#include <iomanip>
#include "TeamLeader.h"

using namespace std;


//Functions

	//Takes the input double x and sets it to the variable mobonus
	void setBonus(double x);

	//Takes the input double x and sets it to the variables reqthours
	void setRequiredHours(double x);

	//Takes the input double x and sets it to the variables atdthours
	void setAttendedHours(double x);

	//Takes the variable mobonus and returns it
	double returnBonus();
		
	//Takes the variable reqthours and returns it
	double returnRequiredHours();

	//Takes the variable atdthours and returns it
	double returnAttendedHours();
	
	//Checks the variables mobonus, reqthours, and atdthours are positive and valid
	void TeamLeader::variableCheck()
	{
		//Variable checker
		if (mobonus < 0 || reqthours < 0 || atdthours < 0)
		{
			//Error message
			cout << "You cannot have a negative variable" << endl;

			//exit function
			exit(0);
		}
	}

	//Prints the information  from employee class, produciton worker class, and the information in the TeamLeader Class
	void TeamLeader::print()
	{
		//Title
		cout << "Team Leader" << endl;

		//Function to display productionworker information alongside employee information
		ProductionWorker::print();

		//Checks the variables in this class to make sure theyre usable
		TeamLeader::variableCheck();

		//Outputs the monthly bonus
		cout << "Monthly Bonus:" << setw(3) << "$" << setprecision(2) << mobonus << endl;

		//Outputs the required training hours
		cout << "Required Training Hours:" << setw(3) << setprecsion(1) << reqthours << endl;

		//Outputs the attended training hnours
		cout << "Attended Training Hours:" << setw(3) << setprecision(1) << atdthours << endl;

	}