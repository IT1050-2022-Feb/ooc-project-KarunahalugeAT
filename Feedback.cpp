#include "Feedback.h"
#include <iostream>
#include<cstring>
using namespace std;

Feedback::Feedback(){
strcpy(feedbackID , "") ;
strcpy(email , "" );
strcpy(comment ,"") ;
}

Feedback::Feedback(const char fbID[],const char fbEmail[],const char fbComment[]){
strcpy(feedbackID , fbID);
strcpy(email , fbEmail);
strcpy(comment , fbComment);
}

void Feedback::setFeedbackdetails(const char fID[],const char fEmail[],const char fComment[]){

}

void Feedback::displayFeedbackDetails(){
cout<<"Feedback ID : "<<feedbackID<<endl;
cout<<"Email : "<<email<<endl;
cout<<"Comment : "<<comment<<endl;
}

Feedback::~Feedback(){
  cout<<"Delete Feedback "<<endl;
}