#include <iostream>
#include <string>
#include <cstdlib>

#include "Employee.h"


using namespace std;

int  main()
{
	const int NOE = 5;//Number Of Employees
	const int MAX = 35;// Maximum number of years an employee can work for
	Employee* e1 = new Employee[NOE];
	string all_lname[] = {"Curry", "Davis", "Philips", "Jackson", "Johnson"};//all last names
	string all_fname[] = {"David", "John", "Sasha", "Madison", "Eric"};//all first names
	string fname, lname;
	int years = 0;
	double salary[] = {75000, 83500, 110000, 89000, 78000};
	int found = 0;	

	srand(time(NULL));
	//populate e1 objects using random names from lname[] and fname
	for(int i=0; i <NOE; i++){
		years = rand() % MAX;
		(e1 + i)->setEmployee(all_fname[rand()%NOE], all_lname[rand()%NOE], years, salary[rand()%NOE]);
	}

	for(int i=0; i <NOE; i++){
                cout << (e1 + i)->getfname() << " " << (e1 + i)->getlname() << endl;
        }

	cout << "----------------------------------" << endl << endl;
	cout << "Enter employee name to search info: ";
	cin >> fname >> lname;
 	
	cout << "RESULTS" << endl << "-------" << endl;
	for(int j=0; j<NOE; j++){
		if((e1 + j)->getlname() == lname && (e1 + j)->getfname() == fname){
			cout << (e1 + j)->getfname() << " " << (e1 + j)->getlname()
			     << " " << (e1 + j)->getsyears() << " " << (e1 +j)->getsalary() << endl;
			found += 1;
		}
	}
	
	if(found == 0) cout << "No employee found!" << endl;
	return 0;
}
