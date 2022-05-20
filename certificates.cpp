#include"certificates.h"
#include <iostream>
#pragma once
using namespace std;

certificates::certificates(){
certificateID = "";
C_GPA = 0;
Grade = "";
}
certificates::certificates(string cfID,float cfGPA,string cfGrade){
certificateID = cfID;
C_GPA=cfGPA;
Grade = cfGrade;
}
void certificates::setCertificateDetails(string cID,float cGPA,string cGrade){
certificateID = cID;
C_GPA=cGPA;
Grade = cGrade;
}
void certificates::displayCertificateDetails(){
cout<<"Certificate ID : "<<certificateID<<endl;
cout<<"GPA : "<<C_GPA<<endl;
cout<<"Grade : "<<Grade<<endl;
}
certificates::~certificates(){
cout<<"Delete certificate "<<certificateID<<endl;
}