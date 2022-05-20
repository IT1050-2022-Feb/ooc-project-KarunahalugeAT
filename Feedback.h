#include<iostream>
using namespace std;
#pragma once
class Feedback{
private:
char feedbackID[10];
char email[30];
char comment[30];
public:
Feedback();
Feedback(const char fbID[],const char fbEmail[],const char fbComment[]);
void setFeedbackdetails(const char fID[],const char fEmail[],const char fComment[]);
void displayFeedbackDetails();
~Feedback();
};