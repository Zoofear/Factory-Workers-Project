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
	
	ProductionWorker Paul(1, 20.25);
	ProductionWorker Harriet(2, 25.5);

	Paul.print();
	Harriet.print();
}
