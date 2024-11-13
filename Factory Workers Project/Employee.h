//
#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class Employee 
{
public:

	//Constructor
	Employee(string n = "NAME", int e = 0, int h = 0): name(n), empnumber(e), hiredate(h){}

	//Functions
	
	//Takes in an string x and assigns it to the variable name
	void setName(string x)
	{
		name = x;
	}

	//Takes in the int x and assigns it to the variable empnumbner
	void setEmpNumber(int x)
	{
		empnumber = x;
	}
	
	//Takes in the int x and assigns it to the variable hiredate
	void setHireDate(int x)
	{
		hiredate = x;
	}


	string returnName()
	{
		return name;
	}


	int returnEmpNumber()
	{
		return empnumber;
	}


	int returnHireDate()
	{
		return hiredate;
	}


	void printEmployee()
	{
		cout << "Name:" << setw(3) << name << endl;
	}


private:

	string name;
	int empnumber;
	int hiredate;

};