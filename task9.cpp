#include <iostream>
using namespace std;
string point(int h,int x,int y);
main(){
    int h,x,y;
    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter x coordinate:";
    cin>>x;
    cout<<"Enter y coordinate:";
    cin>>y;
    string result=point(h,x,y);
    cout<<result;

}
string point(int h,int x,int y){
    string r;
    int pofx=2*h;
    int pofy=4*h;
    if((x>=0&&x<=pofx) && (y>=0&&y<=pofy)){
        r="Inside";
        
    }
    if(x>pofx || y>pofy){
        r="Outside";
    }
    if(x==0||y==0||x==h||y==h){
            r="Border";
        }
    return r;









}
