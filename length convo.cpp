#include <iostream>
using namespace std;
int main()
{
 float cm,meter,feet,inch;
 cout<<"Enter height in centi meter: ";
 cin>>cm;
 meter=cm/100;
 feet=cm/30.48;
 inch=cm/2.54;
 cout<<"Your height in meter is: "<<meter<<"m"<<endl;
 cout<<endl;
 cout<<"Your height in feet is: "<<feet<<"ft"<<endl;
 cout<<endl;
 cout<<"Your height in inches is: "<<inch<<"in"<<endl;
    return 0;
}