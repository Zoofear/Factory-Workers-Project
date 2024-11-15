//Header file for the ShiftSuperVisor class

#include <iostream>
#include <iomanip>
#include "ShiftSuperVisor.h"

using namespace std;

class ShiftSuperVisor : public Employee
{
public:

//Constructor

	ShiftSuperVisor(double as = 0, double ab = 0) :ansalary(as), anbonus(ab) {}

//Functions
		
	void setSalary(double x);

	void setBonus(double x);

	double returnSalary();
	
	double returnBonus();

	// This function checks the vairables to make sure they are usable
	void ShiftSuperVisor::variableCheck()
	{
		//Check for the variables
		if (anasalary < 0 || anbonus < 0)
		{
			//Error output message
			cout << "You cannot be paid a negative number" << endl;

			//exit function
			exit(0);
		}
	}
	
	//This function uses the print function from the employee class to print the parent class and the additional information from this class
	void ShiftSuperVisor::print()
	{
		
		//Variable check function
		ShiftSuperVisor::variableCheck();
		
		//Title of the report	
		cout << "Shift Supervisor" << endl;

		//Employee print function
		Employee::print();

		//Annual salary print
		cout << "Annual Salary:" << setw(3) << "$" << setprecision(2) << anasalary << endl;
		
		//Production bonus print
		cout << "Annual Bonus:" << setw(3) << "$" << setprecision(2) << anbonus << endl;
	}

	private:

		//The annual salary of the Shift Supervisor
		double ansalary;

		//The production bonus the Shift Supervisor earned
		double anbonus;
}; 