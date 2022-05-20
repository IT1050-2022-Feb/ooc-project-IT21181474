#include <iostream>
#include <string>

//Linking .cpp files
#include "Administrator.cpp"
#include "Faculty.cpp"
#include "FacultyHead.cpp"
#include "FAQ.cpp"
#include "Guest.cpp"
#include "Lecturer.cpp"
#include "Notice.cpp"
#include "Report.cpp"
#include "Student.cpp"
#include "User.cpp"

using namespace std;

//client program
int main()
{
cout << endl << "**********************Online Helpdesk for Univercity Students**********************" << endl << endl << endl;

//Admin create objects
Administrator *A1 = new Administrator("John", "001", "John12345","john@gmail.com");
Administrator *A2 = new Administrator("Smith", "002", "Smith12345","smith@gmail.com");
  
A1->displayAdmin();
A2->displayAdmin();

cout << endl << "***********************************************************************************" << endl << endl;
  
//Faculty create objects
Faculty *FA1 = new Faculty("FA001", "Faculty of Computing", "0111234567");
Faculty *FA2 = new Faculty("FA002", "Faculty of Management", "0112223456");
  
FA1->displayFacultyDetails();
FA2->displayFacultyDetails();

cout << endl << "***********************************************************************************" << endl << endl;
  
//Faculty Head create objects
FacultyHead *F1 = new FacultyHead("FBA2100001", "Perera123@", "Faculty of Business Administration");
FacultyHead *F2 = new FacultyHead("FOC2100016", "Fdo456!", "Faculty of Computing");
    
F1->displayDetails();
F2->displayDetails();

cout << endl << "***********************************************************************************" << endl << endl;
  
//FAQ create objects
FAQ *faq1 = new FAQ("FAQ00001","Type 02");
FAQ *faq2 = new FAQ("FAQ00100","Type 03");

faq1->displayDetails();
faq2->displayDetails();

cout << endl << "***********************************************************************************" << endl << endl;
  
//Guest create objects
Guest *g1 = new Guest("Jon","965530835V","Jon1999@gmail.com", "0715342001");
Guest *g2 = new Guest("Ben","988870835V","Ben98@gmail.com", "0715243010");

cout<<"Guest Name"<<"\t\t"<<"NIC"<<endl<<endl;

g1->setDetails();
g2->setDetails();

 cout << endl << "***********************************************************************************" << endl << endl;
  
//Lecturer create objects
Lecturer *L1 = new Lecturer("LID001", "Yapa A.B.", "Yapa12345","yapa@gmail.com");
Lecturer *L2 = new Lecturer("LID002", "Gunapala C.C.", "Cc12345","gunapala@gmail.com");
  
L1->displayDetails();
L2->displayDetails();

cout << endl << "***********************************************************************************" << endl << endl;

//Notice create objects
Notice*N1=new Notice("N001","F002");
Notice*N2=new Notice("N002","F005");
  
N1->displayNotice();
N2->displayNotice();

cout << endl << "***********************************************************************************" << endl << endl;
  
//Report create objects
Report *R1 = new Report(1);
Report *R2 = new Report(2);
  
R1->displayReport();
R2->displayReport();

cout << endl << "***********************************************************************************" << endl << endl;

//Student create objects
Student *s1 = new Student("Ben","Ben@win1","SIT105278","988530835V","1998.12.1");
Student *s2 = new Student("Ron","Ron@campus","SIT105267","988598835V","1998.2.1");

cout<<"Username"<<"\t"<<"Student ID"<<"\t"<<"Student NIC"<<endl<<endl;

s1->manageProfile();
s2->manageProfile();

 cout << endl << "***********************************************************************************" << endl << endl;
  
//User create objects
User *U1 = new User("Jon","Jon1999@gmail.com","0715342001");
User *U2 = new User("Ben","Ben98@gmail.com","0715243010");

U1->displayUserDetails();
U2->displayUserDetails();

  
   
return 0;
}//end main function