#include <iostream>
using namespace std;
string price(string month, int stays);
main()
{
    string month;
    int stays;
    cout << "Enter the month (May,June,July,August,September,October):";
    cin >> month;
    cout << "Enter the number of stays:";
    cin >> stays;
    string result = price(month, stays);
    cout << result;
}
string price(string month, int stays)
{
    float s;
    float a;
    float disStudio;
    float disAppartement;

    if (month == "May" || month == "October")
    {
        s = stays * 50;
        a = stays * 65;
        if (stays > 7)
        {
            disStudio = s - (s * (5 / 100));
        }
        if (stays > 14)
        {
            disStudio = (s - ((s * 30) / 100));
            disAppartement = (a - ((a * 10) / 100));
        }
    }
    if (month == "June" || month == "September")
    {
        s = stays * 75.20;
        a = stays * 68.70;
        if (stays > 14)
        {
            disStudio = (s -( (s * 20) / 100));
            disAppartement = (a - ((a * 10) / 100));
        }
        else{
            disStudio=s;
            disAppartement=a;

        }
    }
    if (month == "July" || month == "August")
    {
        s = stays * 76;    
        a = stays * 77;
        if (stays > 14)
        {
            disAppartement =( a - ((a * 10) / 100));
        }
        else{
            disStudio=s;
            disAppartement=a;

        }
    }
    return "Appartement:" + to_string(disAppartement) + "\nStudio:" + to_string(disStudio);
}