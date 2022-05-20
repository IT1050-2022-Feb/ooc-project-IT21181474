#pragma once
#include<iostream>
#include <string>
#include "User.h" 
#include "FAQ.h" 
#include "Notice.h" 

//Lecturer class
class Lecturer:public User{

  private:
    string lecturerID;
    string password;


  public:
  Lecturer();
  Lecturer(string aLectureID,string name,string uPassword,string email);
  void updateNotice(int qty, Notice *n2);
  void giveAnswers (int type, FAQ *a1);
  void displayDetails();
  void manageProfile();
  ~Lecturer();



};