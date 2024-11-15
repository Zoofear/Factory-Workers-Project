//This is the header file for the class TeamLeader

#pragma once

#include <iostream>
#include <iomanip>
#include "ProdutionWorker.h"

using namespace std;

class TeamLeader : public Employee
{
public:

//Constructor

	TeamLeader(double m = 0, double r = 0, double a = 0) : mobonus(m), reqthours(r), atdhours(a) {}

//Functions

	//Takes the input double x and sets it to the variable mobonus
	void setBonus(double x)
	{
		mobonus = x;
	}

	//Takes the input double x and sets it to the variables reqthours
	void setRequiredHours(double x)
	{
		reqthours = x;
	}

	//Takes the input double x and sets it to the variables atdthours
	void setAttendedHours(double x)
	{
		atdthours = x;
	}

	//Takes the variable mobonus and returns it
	double returnBonus()
	{
		return mobonus;
	}

	//Takes the variable reqthours and returns it
	double returnRequiredHours()
	{
		return reqthours;
	}

	//Takes the variable atdthours and returns it
	double returnAttendedHours()
	{
		return atdthours;
	}

	//Checks the variables mobonus, reqthours, and atdthours are positive and valid
	void variableChecker();

	//Prints the information  from employee class, produciton worker class, and the information in the TeamLeader Class
	void print();

private:

	//Monthly bonus amount
	double mobonus;

	//Number of required training hours
	double reqthours;

	//Number of attended training hours
	double atdthours;

};

