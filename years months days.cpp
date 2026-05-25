#include <iostream>
using namespace std;
int main()
{
    int y,m,d,d1;
    cout<<"Enter number of days: ";
    cin>>d;
    y=d/365;
    d=d%365;
    m=d/30;
   
    d1=d%30;

    cout<<y<<" years "<<m<<" months "<<d1<<" days.";
    return 0;
}