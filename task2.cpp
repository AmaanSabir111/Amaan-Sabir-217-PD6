#include<iostream>
using namespace std;
string grade(float average);
float avg(int eM,int mM,int cM,int sM,int bM);
main(){
    string name;
    int eM,mM,cM,sM,bM;
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter marks for English:"<<endl;
    cin>>eM;
     cout<<"Enter marks for Math:"<<endl;
    cin>>mM;
    cout<<"Enter marks for Chemistry:"<<endl;
    cin>>cM;
     cout<<"Enter marks for Social Science:"<<endl;
    cin>>sM;
    cout<<"Enter marks for Biology:"<<endl;
    cin>>bM;
    float average=avg(eM,mM,cM,sM,bM);
    string result=grade(average);
    cout<<"Student Name:"<<name<<endl;
    cout<<"Percentage:"<<average<<"%"<<endl;
    cout<<"Grade:"<<result;
 

}
float avg(int eM,int mM,int cM,int sM,int bM){
    float average=(eM+mM+cM+sM+bM)/5;
    return average;

}
string grade(float average){
   

    string g;
    if(average>=90 && average<=100){
        g="A+";

    }
    else if(average>=80 && average<90){
        g="A";

    }
    else if(average>=70 && average<80){
        g="B+";

    }
    else if(average>=60 && average<70){
        g="B";

    }
    else if(average>=50 && average<60){
        g="C";

    }
    else if(average>=40 && average<50){
        g="D";

    }
    else if(average<40){
        g="F";

    }
    return g;


}
