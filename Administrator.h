#pragma once
#include <iostream>
#include <string>
#include "Report.h"
using namespace std;

#define SIZE 20

//Administrator class
class Administrator
{
private:
	string adminName;
	string adminID;
	string password;
	string email;
public:
	Administrator(string aName, string aID, string pw, string mail);
	void manageProfile();
	void updateSystem();
	void manageFaculty();
	void solveIssues(int type, Report *r2);
	void displayAdmin();
};