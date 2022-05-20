#include "Report.h"

//default constructor
Report::Report(){
  
}

//constructor with parameters
Report::Report(int preportID){
  reportID = preportID;
}

void Report::genarateReport() {

}

void Report::displayReport() {
	cout << "Report ID :" << reportID << endl;
}