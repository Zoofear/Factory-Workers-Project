//This is the header file for the class TeamLeader

#pragma once

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;

class TeamLeader : public ProductionWorker
{
public:

//Constructor

	TeamLeader(string n = "NAME", int e = 0, string h = "0", int s = 1, double p = 0, double m = 0, double r = 0, double a = 0) : mobonus(m), reqthours(r), atdthours(a)
	{
		Employee::setName(n);
		Employee::setEmpNumber(e);
		Employee::setHireDate(h);
		ProductionWorker::setPayrate(p);
		ProductionWorker::setShift(s);
	}

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
	void variableCheck();

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

