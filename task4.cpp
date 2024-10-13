#include <iostream>
using namespace std;
float amount(char sCode, char dCode, int time);
main()
{
    char sCode, dCode;
    int time;
    cout << "Enter the service code (R for regular,P for premium):";
    cin >> sCode;
    if(sCode=='P'){
    cout << "Enter the time of call (D for day,N for night):";
    cin >> dCode;}
    cout << "Enter the number of minutes used:";
    cin >> time;
    string pr;

    float result = amount(sCode, dCode, time);
    cout << "Service Type:" << sCode << endl;
    cout << "Total Minutes Used:" << time << endl;
    cout << "Amount Due:$" << result << endl;
}
float amount(char sCode, char dCode, int time)
{
    float Tamount;
    if (sCode == 'R')
    {
        if (time <= 50)
        {
            Tamount = 10;
        }
        else if (time > 50)
        {
            float diff = time - 50;
            Tamount = 10 + (diff * 0.25);
        }
    }
    if (sCode == 'P')
    {
        if (dCode == 'D')
        {
            if (time <= 75)
            {
                Tamount = 25;
            }
            else if (time > 75)
            {
                float diff = time - 75;
                Tamount = 10 + (diff * 0.10);
            }
        }
        if (dCode == 'N')
        {
            if (time <= 100)
            {
                Tamount = 25;
            }
            else if (time > 100)
            {
                float diff = time - 100;
                Tamount = 10 + (diff * 0.05);
            }
        }
    }
    return Tamount;
}