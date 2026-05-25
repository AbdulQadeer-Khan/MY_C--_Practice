#include <iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"Enter first valuue: ";
    cin>>a;
    cout<<"Enter second value: ";
    cin>>b; 
    cout<<"enter operation:";
    cin>>op;
    if (op=='+'){
        cout<<a+b<<endl;}
    else if (op=='-'){
        cout<<a-b<<endl;}
    else if (op=='*'){
        cout<<a*b<<endl;}
    else if (op=='/'){
        cout<<a/b<<endl;}
        else{
            cout<<"Invalid operation";}
return 0;
}