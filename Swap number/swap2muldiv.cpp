#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter first number a= ";
    cin>>a;
    cout<<"Enter second number b= ";
    cin>>b;
    
    if(a==0||b==0){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"first number a= "<<a<<endl;
    cout<<"second number b= :"<<b<<endl;}

    else {
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"First number a= "<<a<<endl;
    cout<<"Second numbeer b= "<<b<<endl;}

    return 0;
}