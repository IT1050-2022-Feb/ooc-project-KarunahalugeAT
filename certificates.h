#include<iostream>
using namespace std;
#pragma once

class certificates{
private:
string certificateID;
float C_GPA;
string Grade;
public:
certificates();
certificates(string cfID,float cfGPA,string cfGrade);
void setCertificateDetails(string cID,float cGPA,string cGrade);
void displayCertificateDetails();
~certificates();
};