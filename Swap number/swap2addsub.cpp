#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any number a= ";
    cin>>a;
    cout<<"Enter any number b= ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"first number a= "<<a<<endl;
    cout<<"second number b= :"<<b<<endl;
    return 0;
}