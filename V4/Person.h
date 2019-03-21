//Person.h
#include<iostream>
using namespace std;
#ifndef Person_H
#define Person_H
class Person{
	public:
		Person();
		void setName(string, string);
		void setID(string);
		void setDepartment(string);
		string getName();
		string getID();
		string getDepartment();
		virtual void print();
	protected:
		string first;
		string last;
		string id;
		string department;
		
};
#endif
