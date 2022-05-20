#include "Lecturer.h" 

//constructor with parameters
 Lecturer::Lecturer(string aLectureID,string lname,string uPassword,string lemail)
  {
      lecturerID = aLectureID;
      username = lname;
	    password = uPassword;
      email = lemail;
      
  }

  void   Lecturer::updateNotice(int qty, Notice *n2){
    
  }

  void  Lecturer::giveAnswers(int type, FAQ *a1){
    
  }

  void Lecturer::displayDetails(){
    cout<<"Lecturer ID   :"<<lecturerID<<endl;
    cout<<"Lecturer Name :"<<username<<endl<<endl;
  }

  void Lecturer::manageProfile(){
    
  }

  Lecturer::~Lecturer(){
    
  }