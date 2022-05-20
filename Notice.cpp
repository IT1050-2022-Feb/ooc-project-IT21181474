#include "Notice.h"
using namespace std;


//constructor with parameters
Notice::Notice(string nID,string fID){
        noticeID=nID;
        facultyID=fID;
}

void Notice::displayNotice(){
        cout<<"Notice ID  :"<<noticeID<<endl;
        cout<<"Faculty ID :"<<facultyID<<endl;
}

void Notice::updateNotice(){
  
}