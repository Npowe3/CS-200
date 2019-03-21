//Person.cpp
#include "Person.h"

Person::Person(){
	setName("", "");
	setID("");
	department = "";
}
//mutators
void Person::setName(string f, string l){
	first = f;
	last = l;
}
void Person::setID(string i){
	id = "CTU" + i;
}
void Person::setDepartment(string d){


	department = d;	
}

//accessors
string Person::getName() { return first + " " + last;}
string Person::getID(){return id;}
string Person::getDepartment(){return department;}

void Person::print(){
	cout<< "Person Information\n"
		<< first << " " <<last <<endl;
}
