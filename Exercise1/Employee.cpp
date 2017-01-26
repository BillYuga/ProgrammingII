#include <iostream>
#include "Employee.h"

Employee::Employee(){
	fname = "";
	lname = "";
	syears = 0;
	salary = 0;
}

void Employee::setEmployee(string _fname, string _lname, int _syears, double _salary){
	fname = _fname;
        lname = _lname;
        syears = _syears;
        salary = _salary;
}

Employee::~Employee(){
	cout << "Successfully deleted allocated memory";
}

string Employee::getlname() const{
	return lname;
}

string Employee::getfname() const{
	return fname;
}

int Employee::getsyears() const{
	return syears;
}

double Employee::getsalary() const{
	return salary;
}
