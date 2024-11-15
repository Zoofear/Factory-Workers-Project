// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSuperVisor.h"
#include "TeamLeader.h"

using namespace std;

int main()
{
	
	ProductionWorker Paul("Paul Jones", 12345, "10/28/2024", 1, 20.25);
	ProductionWorker Harriet("Harriet Smith", 54321, "06/15/2024", 2, 25.5);
	ShiftSuperVisor Elmer("Elmer Velasquez", 100325, "01/17/2024", 70000, 1000);
	TeamLeader Mike("Mike Rogers", 64327, "02/07/2024", 2, 25.5, 150, 20, 10);

	
	Paul.print();

	//Spacer
	cout << endl;

	Harriet.print();
	
	//Spacer
	cout << endl;
	
	Elmer.print();
	
	//Spacer
	cout << endl;

	Mike.print();
}
