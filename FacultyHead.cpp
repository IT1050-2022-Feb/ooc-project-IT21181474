#include"FacultyHead.h"
using namespace std;

//default constructor
FacultyHead :: FacultyHead(){}

//constructor with parameters
FacultyHead :: FacultyHead (string pfacHeadID, string pfacHeadPassword, string pfacultyName)
{
	facHeadID = pfacHeadID;
	facHeadPassword = pfacHeadPassword;
	facultyName = pfacultyName;
}

void FacultyHead :: updateNotice(int qty, Notice *n3){
  
}

void FacultyHead :: manageFaculty(){
  
}

void FacultyHead :: setDetails(){
  
}

void FacultyHead :: displayDetails(){
	cout<<"Faculty Head ID\t:"<<facHeadID<<endl;
	cout<<"Password\t:"<<facHeadPassword<<endl;
	cout<<"Faculty Name\t:"<<facultyName<<endl<<endl;
}

FacultyHead :: ~FacultyHead(){
  
}