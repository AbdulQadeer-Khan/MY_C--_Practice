#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Quadratic Equation = ax^2 + bx + c" << endl;
    cout <<"To find the value of x, we will use formula x = (-b ± √b^2 - 4ac)/2a"<<endl;
    int a;
    int b;
    int c;
   
    cout << "Enter the value of a: ";
    cin>> a;
    cout << "Enter the value of b: ";
    cin>> b;
    cout<< "Enter the value of c: ";
    cin>> c;
    double x;
    x = -b + sqrt(b*b-4*a*c)/(2*a);
   
    cout << "THE value of x is :"<<x<<endl;
   
    return 0;
}