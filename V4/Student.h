//Student.h
#include"Person.h"
#ifndef STUDENT_H
#define STUDENT_H
class Student: public Person{
	public:
		Student();
		void setStanding(string);
		void setCredits(int);
		void setGPA(double);
		void print();
	private:
		string standing;
		int credits;
		double gpa;
};
#endif
