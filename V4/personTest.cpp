#include <iostream>
using namespace std;
#include"Person.h"
#include"Faculty.h"
#include"Student.h"

int menu(){
	int choice;
	cout << "\t\t Main Menu\n"
		 << "\t\t 1. Add Faculty\n"
		 << "\t\t 2. Add Student\n"
		 << "\t\t 3. View Faculty\n"
		 << "\t\t 4. View Students\n"
		 << "\t\t 5. View All\n"
		 << "\t\t 6. Exit\n"
		 << "\t Enter your choice: ";
	cin >> choice;
	return choice;
}
void addFaculty(Faculty* fPTR, int size, int &track){
	string first, last, rank;
	if(track >= size)
	cout<< "Maxed out!\n";
	else{
	for(int i=0; i< track; i++)
		fPTR++;
	cout << "Enter full name and rank";
	cin>> first>> last>> rank;
	fPTR -> setName(first, last);
	fPTR -> setRank(rank);
	cout<< "Enter ID#, Office location, salary, and department";
	track++;
	}
}
void viewFaculty(Faculty* fPTR, int max){
	for(int i =0; i < max; i++){
		fPTR -> print();
		fPTR++;
	}
}

int main(int argc, char** argv){
	//populating faculty and student
	Faculty myFac[100];
	Student myStu[100];
	Person* myPers[200];
	int facCount = 0;
	int stuCount = 0;
	int empCount = 0;
	
	int option;
	do{
		system("CLS");
		option = menu();
		switch(option){
			case 1:
				addFaculty(myFac, 100, facCount);
				cout<< "Faculty count = "<< facCount<< endl;
				break;
			case 2:
				break;
			case 3:
				viewFaculty(myFac, facCount);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				cout<< "Goodbye!\n";
				break;
			default:
				cout<< "Error, Invalid choice!\n";
				
		}
		system("PAUSE");
	}while(option != 6);
	
	

	return 0;
}
