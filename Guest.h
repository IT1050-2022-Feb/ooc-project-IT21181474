#pragma once
#include<iostream>
#include <string>
#include "User.h"


//Guest class
class Guest:public User
{
private:
	
	string guestNIC;


public:
	Guest();
	Guest(string name, string gNIC,string Email,  string phone);
  void setDetails();
	void registerSystem();
	

};