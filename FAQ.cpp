#include "FAQ.h"

//default constructor
FAQ :: FAQ(){
  
}

//constructor with parameters
FAQ :: FAQ(string pfaqID, string pfaqType)
{
	faqID = pfaqID;
	faqType = pfaqType;
}

void FAQ :: viewFAQ(){
  
}

void FAQ:: setDetails(){
  
}

void FAQ :: displayDetails()
{
	cout<<"FAQ ID\t:"<<faqID<<endl;
	cout<<"FAQ Type:"<<faqType<<endl<<endl;
}

FAQ :: ~FAQ(){
  
}