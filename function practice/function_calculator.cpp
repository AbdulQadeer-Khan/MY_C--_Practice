#include <iostream>
using namespace std;

int add(int a,int b);
int subtract(int a,int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int a,b;
    cout<<"enter any two numbers";
    cin>>a>>b;

    cout<<"sum is "<<add(a,b)<<endl;
    cout<<"difference is "<<subtract(a,b)<<endl;
    cout<<"product is "<<multiply(a,b)<<endl;
    if(b!=0){cout<<"quotient is "<<divide(a,b);}
    else {cout<<"quotient error ,Cannot divide by zero";}

    return 0;

}

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}