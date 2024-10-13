#include<iostream>
using namespace std;
string zodiacSign(int bD,string bM);
main(){
    int bD;
    string bM;
    cout<<"Enter the day of birth:";
    cin>>bD;
    cout<<"Enter the month of birth (e.g., January,February):";
    cin>>bM;
    string result=zodiacSign(bD,bM);
    cout<<"Zodiac Sign:"<<result;

}
string zodiacSign(int bD,string bM){
    string z;
    if(bM=="March" && (bD>=21&&bD<=30) || bM=="April" && (bD>=1&&bD<=19)){
        z="Aries";
    }
    else if(bM=="April" && (bD>=20&&bD<=30) || bM=="May" && (bD>=1&&bD<=20)){
        z="Taurus";
    }
    else if(bM=="May" && (bD>=21&&bD<=30) || bM=="June" && (bD>=1&&bD<=20)){
        z="Gemini";
    }
    else if(bM=="June" && (bD>=21&&bD<=30) || bM=="July" && (bD>=1&&bD<=22)){
        z="Cancer";
    }
    else if(bM=="July" && (bD>=23&&bD<=30) || bM=="August" && (bD>=1&&bD<=22)){
        z="Leo";
    }
    else if(bM=="August" && (bD>=23&&bD<=30) || bM=="September" && (bD>=1&&bD<=22)){
        z="Virgo";
    }
    else if(bM=="September" && (bD>=23&&bD<=30) || bM=="October" && (bD>=1&&bD<=22)){
        z="Libra";
    }
    else if(bM=="October" && (bD>=23&&bD<=30) || bM=="November" && (bD>=1&&bD<=21)){
        z="Scorpio";
    }
    else if(bM=="November" && (bD>=22&&bD<=30) || bM=="December" && (bD>=1&&bD<=21)){
        z="Sagittarius";
    }
    else if(bM=="December" && (bD>=22&&bD<=30) || bM=="January" && (bD>=1&&bD<=19)){
        z="Capricon";
    }
    else if(bM=="January" && (bD>=20&&bD<=30) || bM=="February" && (bD>=1&&bD<=18)){
        z="Aquarius";
    }
    else if(bM=="February" && (bD>=19&&bD<=30) || bM=="March" && (bD>=1&&bD<=20)){
        z="Pisces";
    }
    return z;
    

}