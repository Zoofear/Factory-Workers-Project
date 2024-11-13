//Employee class that takes information of the employee and stores it to be manipulated and outputted
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

//Takes the string name and returns it as an output
	string returnName()
	{
		return name;
	}

//Takes the int empnumber and returns it as an output
	int returnEmpNumber()
	{
		return empnumber;
	}

//Takes the int hiredate and returns it as an output
	int returnHireDate()
	{
		return hiredate;
	}

//Prints out the classes information
	void printEmployee()
	{
		cout << "Name:" << setw(3) << name << endl;
		cout << "Employee Number:" << setw(3) << name << endl;
		cout << "Date Hired:" << setw(3) << endl;
	}

private:

//Employees name
	string name;
//Employee number
	int empnumber;
//Employee hire date
	int hiredate;

};