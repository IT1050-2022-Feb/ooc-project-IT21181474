#pragma once
#include<iostream>
using namespace std;

//User class
class User
{
protected:
	string username;
	string email;
  string contactNo;
public:
	User();
	User(string name,string uemail,string phone);
	virtual void setDetails();
	void displayUserDetails();
	void manageProfile();
	
	
};