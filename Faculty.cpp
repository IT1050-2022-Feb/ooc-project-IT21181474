#include "Faculty.h"

//default constructor
Faculty::Faculty(){
  
  }

//constructor with parameters
Faculty :: Faculty(string facID, string facName, string num){
  facultyID = facID;
  facultyName = facName;
  contactNo = num;
}

void Faculty::addUser(User *s, User *l, User *u, User *f){
      usr[0] = s;
      usr[1] = l;
      usr[2] = u;
      usr[3] = f;
  }

void Faculty::provideFacultyDetails(){
  
  }

void Faculty::displayFacultyDetails(){
    cout<<"Faculty ID         :"<<facultyID<<endl;
    cout<<"Faculty Name       :"<<facultyName<<endl;
    cout<<"Faculty Contact No :"<<contactNo<<endl<<endl;
  }

Faculty::~Faculty(){
  cout << "Deleting faculty" << facultyID << endl;
}