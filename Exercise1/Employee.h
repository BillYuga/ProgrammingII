#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee{
private: 
	string lname;
	string fname;
	int syears;
	double salary;
	Employee* ptr;
public:
	Employee();
	void setEmployee(string, string, int,  double);
	string getlname() const;
	string getfname() const;
	int getsyears() const;
	double getsalary() const;
	~Employee();
};
#endif
