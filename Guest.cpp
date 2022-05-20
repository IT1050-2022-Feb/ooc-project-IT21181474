#include "Guest.h"
using namespace std;

//default constructor
Guest::Guest(){
}

//constructor with parameters
Guest::Guest(string name, string gNIC,string gEmail,  string phone) {
	email=gEmail;
	guestNIC=gNIC;
	username = name;
	
}


void Guest::setDetails() {
  
   cout<<username<<"\t\t\t"<<guestNIC<<endl;
}

void Guest::registerSystem() {
}

