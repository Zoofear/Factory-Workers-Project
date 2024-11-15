//Header file for the ProductionWorker Class
#pragma once

#include <iostream>
#include "Employee.h"
using namespace std;

class ProductionWorker : public Employee
{
public:

	//Constructor

	ProductionWorker(int s = 1, double p = 0) :shift(s), payrate(p) {}

	//Functions

	//Takes the input int x and sets it to the variable shift
	void setShift(int x)
	{
		shift = x;
	}
	
	//Takes the input double x and sets it to the variable payrate
	void setPayrate(double x)
	{
		payrate = x;
	}

	//Takes the variable shift and returns it as an output
	int returnShift()
	{
		return shift;
	}

	//Takes the variable payrate and returns it as an output
	double returnPayrate()
	{
		return payrate;
	}

	//Takes the variables shift and payrate
	//Uses if (shift != 1 || shift != 2) statment to make sure that shift is equal to one or two and if it isn't, it outputs an error message
	//Uses if (payrate < 0) output an error message that you cannot have a negative number for an hourly rate
	void variableCheck();

	//Uses the print function from the employee class to print out the employees information, then adds the new information to the production worker print function
	void print();


private:
	
	//Variable that acts a boolean, 1 = dayshift, 2 equals nightshift
	int shift;
	
	//Variable that shows the hourly pay rate for the employee
	double payrate;
};