#pragma once
#include<iostream> 
#include <string>
#include "User.h"
#include "Notice.h"
#include "FAQ.h"

//Student class
class Student : public User
{
private:
	string studentID;
	string studentNIC;
	string dob;
	string password;
public:
	Student();
	Student(string stID,string uPassword,string stNIC,string sDOB,string name);
	void askQuestion();
	void manageProfile();
	void checkNotice(int format , Notice *n1);
	void giveRating(int rate, FAQ *r1);
	
};