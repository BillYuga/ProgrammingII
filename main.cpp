#include <iostream>
#include <string>
#include <cstdlib>
#include "Employee.h"


using namespace std;

int  main()
{
	const int NUMBEROFEMPLOYEES = 5;
	Employee* e1 = new Employee[NUMBEROFEMPLOYEES];
	string lname = "James", fname = "Charles";
	int years = 0;
	double salary = 600000;
	
	for(int i=0; i <NUMBEROFEMPLOYEES; i++){
		years = rand() % 21;
		(e1 + i)->Employee(fname, lname, years, salary);
	}
	
 
	return 0;
}
