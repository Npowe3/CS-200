//Faculty.cpp

#include "Faculty.h"

Faculty::Faculty(){
	setRank("No Rank");
	setSalary(0.0);
	setOffice("No Office");
}

void Faculty::setRank(string r){
	rank = r;
}

void Faculty::setSalary(double s){
	salary = s;
}

void Faculty::setOffice(string o){
	office = o;
}
void Faculty::print(){
	//add office, salary, etc
	cout<< "Faculty Information\n"
		<< "Full Name: "<< first<< " "<< last<< "\n"
		<< "Rank: "<< rank<< "\n"
		<< "ID: "<< id<< "\n"
		<< "Office: "<< office<< "\n"
		<< "Salary: "<< salary<< "\n"
		<< "Department: "<< department<<endl;
}
