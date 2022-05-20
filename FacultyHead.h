#pragma once
#include<iostream>
#include <string>
#include "User.h"
#include "Report.h"
#include "Notice.h"

//FacultyHead class
class FacultyHead : public User{
	private:
		string facHeadID;
		string facHeadPassword;
		string facultyName;
		Report *rpt2;
	public:
		FacultyHead();
		FacultyHead (string pfacHeadID, string pfacHeadPassword, string pfacultyName);
		void updateNotice(int qty, Notice *n3);
    void manageFaculty();
		void setDetails();
		void displayDetails();
		~FacultyHead();
};