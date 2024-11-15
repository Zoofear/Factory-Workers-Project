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
	
	ProductionWorker Paul("Paul Jones", 12345, "10282024", 1, 20.25);
	ProductionWorker Harriet("Harriet Smith", 54321, "06152024", 2, 25.5);

	Paul.print();
	Harriet.print();
}
