#include "Administrator.h"

//constructor with parameters
Administrator::Administrator(string aName, string aID, string pw, string mail){
	adminName = aName;
	adminID = aID;
	password = pw;
	email = mail;
}

void Administrator::manageProfile() {

}

void Administrator::updateSystem() {

}

void Administrator::manageFaculty() {

}

void Administrator::solveIssues(int type, Report *r2) {

}

void Administrator::displayAdmin(){
	cout << "Administrator Name  :" << adminName << endl;
    cout << "Administrator ID    :" << adminID << endl;
}