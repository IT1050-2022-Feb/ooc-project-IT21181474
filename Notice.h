#pragma once
#include <iostream>
#include <string>
using namespace std;

//Notice class
class Notice{
  private:
      string noticeID;
      string facultyID;
  public:
      Notice();
      Notice(string nID,string fID);
      void displayNotice();
      void updateNotice();
};