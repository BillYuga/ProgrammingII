#include <iostream>
#include "Employee.h"

Employee::Employee(){
	fname = "";
	lname = "";
	syears = 0;
	salary = 0;
}

Employee::Employee(string _fname, string _lname, int _syears, double _salary){
	fname = _fname;
        lname = _lname;
        syears = _syears;
        salary = _salary;
}

~Employee::Employee(){
	delete [] Employee;
}
