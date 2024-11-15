//Header file for the ShiftSuperVisor class
#pragma once

#include <iostream>
#include <iomanip>
#include "Employee.h"

using namespace std;

class ShiftSuperVisor : public Employee
{
public:

	//Constructor

		ShiftSuperVisor(string n = "NAME", int e = 0, string h = "0", double as = 0, double ab = 0) :ansalary(as), anbonus(ab) 
		{
			Employee::setName(n);
			Employee::setEmpNumber(e);
			Employee::setHireDate(h);
		}

		//Functions

			//This function takes the input double x and updates the variable ansalary
			void setSalary(double x)
			{
				ansalary = x;
			}

			//This function takes the input double x and updates the variable anbonus
			void setBonus(double x)
			{
				anbonus = x;
			}

			//This function takes the variable ansalary and returns the variable
			double returnSalary()
			{
				return ansalary;
			}

			//This function takes the variable anbonus and returns the variable
			double returnBonus()
			{
				return anbonus;
			}

			//This function takes the variables anasalary and anbonus and makes sure they are usable by the class
			void variableCheck();

			//This function uses the print function from the employee class to print the parent class and the additional information from this class
			void print();

		private:

			//The annual salary of the Shift Supervisor
			double ansalary;

			//The production bonus the Shift Supervisor earned
			double anbonus;
};