#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r; 
    float f;  
    float t; 
    float r_ad;
    float tau;

    cout<<"put the value of moment arm(r):";
    cin>>r;
    cout << "put value of applied force";
    cin>> f;
    cout<< "Enter the anglr in degrees";
    cin>>t;

    r_ad=t*3.1416/180;
   tau = r * f * sin(r_ad);

    cout<<"the value of torque is: "<<tau<<" Nm.";

    return 0;
}