#include <iostream>
using namespace std;
string checkStudentStatus(int startH,int startM,int shA,int smA);
main(){
    int startH,startM,shA,smA;
    cout<<"Enter exam starting time (hour):";
    cin>>startH;
    cout<<"Enter exam starting time (minutes):";
    cin>>startM;
    cout<<"Enter student hour of arrival:";
    cin>>shA;
    cout<<"Enter student minutes of arrival:";
    cin>>smA;
    string result=checkStudentStatus(startH,startM,shA,smA);
    cout<<result;
    
}
string checkStudentStatus(int startH,int startM,int shA,int smA){
    string r;
    if(startH==shA && startM==smA){
        r="On Time";
    }
    int n1=startH*60+startM;
    int n2=shA*60+smA;
    int diff=n2-n1;
    int hour=-diff/60;
    int min=-diff%60;
    if(diff>30){
        r="Late\n"+to_string(-hour)+":"+to_string(-min)+" hours after the start of exam";
    }
     if(diff<-30){
         r="Early\n"+to_string(hour)+":"+to_string(min)+" hours before the start of exam";
    }
    return r;
}