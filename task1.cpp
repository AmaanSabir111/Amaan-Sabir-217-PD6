#include<iostream>
using namespace std;
string activity(string temp,string h);
main(){
    string temp,humidity;
    cout<<"Enter temperature (warm or cold):";
    cin>>temp;
    cout<<"Enter humidity (dry or humid):";
    cin>>humidity;
    string result=activity(temp,humidity);
    cout<<result;
}
string activity(string temp,string h){
    string r;
    if(temp=="warm" && h=="dry"){
        r="Play Tennis";
    }
    else if(temp=="warm" && h=="humid"){
        r="swim";
    }
    else if(temp=="cold" && h=="dry"){
        r="Play Baketball";
    }
    else if(temp=="cold" && h=="humid"){
        r="Watch Tv";
    }
    return r;

}