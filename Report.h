#pragma once
#include <iostream>

#include "Faculty.h"
using namespace std;

//Report class
class Report;


class Report
{
private:
	int reportID;
	Faculty *fac;
public:
  Report();
	Report(int preportID);
	void genarateReport();
	void displayReport();
};