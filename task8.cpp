#include <iostream>
using namespace std;
int calculateGames(string year, int holidays, int weekends);
main(){
    int holidays,weekends;
    string year;
    cout<<"Enter year type (normal/leap):";
    cin>>year;
    cout<<"Enter number of holidays:";
    cin>>holidays;
    cout<<"Enter number of weekends:";
    cin>>weekends;
    int result=calculateGames(year,holidays,weekends);
    cout<<result;
}
int calculateGames(string year, int holidays, int weekends){
    int tp;
    double t;
    int wyw=48-weekends;
    t=((2.0/3.0)*holidays)+((3.0/4.0)*wyw)+weekends;
    if(year=="normal"){
        tp=t;
    }
    if(year=="leap"){
        tp=t+(t*0.15);
    }
    return tp;



}