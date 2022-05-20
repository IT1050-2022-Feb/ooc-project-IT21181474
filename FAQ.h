#pragma once
#include<iostream>
#include <string>
using namespace std;

//FAQ class
class FAQ{
	private:
		string faqID;
		string faqType;
		
	public:
		FAQ();
		FAQ(string pfaqID, string pfaqType);
		void viewFAQ();
		void setDetails();
		void displayDetails();
		~FAQ();
};
