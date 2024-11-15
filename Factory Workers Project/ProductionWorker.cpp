//Production Worker Class
#pragma once

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;


	//Functions

void setShift(int x);

	void setPayrate(double x);

	int returnShift();

	double returnPayrate();
	
	//Checks the variables
	void ProductionWorker::variableCheck()
	{

		//Shift variable checker
		if (shift != 1 && shift != 2)
		{
			//Error message
			cout << "Error processing the shift" << endl;
			
			//Exits the function
			exit(0);
		}
		if (payrate < 0)
		{
			//Error message
			cout << "You cannot be payed a negative amount" << endl;

			//Exits the function
			exit(1);
		}
	}

	//Prints the information
	void ProductionWorker::print()
	{
		//Checks to make sure variables are usable
		ProductionWorker::variableCheck();
		
		//Prints out the employee information from the previous class
		Employee::print();

		//If true, outputs Day for the shift
		if (shift == 1)
		{
			//Outputting the information
			cout << "Shift:" << setw(3) << "Day" << endl;
		}
	
		//If false, outputs Night for the shift
		else if (shift == 2)
		{
			//Outputting the information
			cout << "Shift:" << setw(3) << "Night" << endl;
		}

		else
		{
			//Error message if somehow the check function didn't work
			cout << "An unexpected Error Occured" << endl;
			
			//Exit function
			exit(3);
		}

		//Output for the hourly pay
		cout << "Hourly Pay Rate:" << setw(3) << "$" << setprecision(4) << payrate << endl;
	}
