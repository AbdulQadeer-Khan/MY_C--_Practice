#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double force;
    int a=10;
    int b=9;
    double q1;
    double q2;
    double r;
    double mult;
    mult=pow(a,b);
    cout<<"Enter the value of q1: ";
    cin>>q1;
    cout<<"Enter the value of q2: ";
    cin>>q2;
    cout<<"Enter the distance between q1 and q2: ";
    cin>>r;
    force=9*mult*(q1*q2)/(r*r);
    cout<<"The value of coulombic force is: "<<force<<" Newton.";
    return 0;

}