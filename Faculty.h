#pragma once
#include <iostream>
#include <string>
using namespace std;

#define SIZE1 4
class User;
class Report;

//Faculty class
class Faculty{
private:
  string facultyID;
  string facultyName;
  string contactNo;
  Report *repo;
  User *usr[SIZE1];
public:
  Faculty();
  Faculty(string facID, string facName, string num);
  void addUser(User *s, User *l, User *u, User *f);
  void provideFacultyDetails();
  void displayFacultyDetails();
  ~Faculty();
};