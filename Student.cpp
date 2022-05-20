
#include"Student.h"
using namespace std;


//default constructor
Student::Student(){
}

//constructor with parameters
Student::Student(string name,string uPassword,string stID,string stNIC,string sDOB ) {
	username=name; 
	password=uPassword;
	studentID=stID;
	studentNIC=stNIC;
	dob=sDOB;
}

void Student::askQuestion() {
}

void Student::manageProfile(){
	cout<<username<<"\t\t"<<studentID<<"\t"<<studentNIC<<endl;
}

void Student::checkNotice(int format , Notice *n1) {
}

void Student::giveRating(int rate, FAQ *r1) {
}