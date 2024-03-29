//Student.cpp
#include "Student.h"

Student::Student(){
	setStanding("Freshman");
	setCredits(0);
	setGPA(4.0);
}
void Student::setStanding(string s){
	standing = s;
}

void Student::setCredits(int c){
	credits = c;
}

void Student::setGPA(double g){
	gpa = g;
}

void Student::print(){
	cout<< "Student Information\n"
		<< "Student Name: "<< first<< " "<<last<< " \n"
		<< "Student ID: "<< id<< "\n"
		<< "Standing: "<< standing<< "\n"
		<< "Credits: "<< credits<< "\n"
		<< "GPA"<< gpa<< endl;
}
