#include <iostream>
using namespace std;
int main()
{
double volume;
double pi=3.1416;
double radius;
cout<<"Enter radius of the sphere";
cin>>radius;
volume=(4*pi*radius*radius*radius)/3;
cout<<"Volume of the given sphere is: "<<volume<<"cm^3";
return 0;
}