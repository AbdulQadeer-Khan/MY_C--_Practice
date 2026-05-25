#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    if(a==0||b==0||c==0){
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    cout<<"First number a= "<<a<<endl;
    cout<<"Second number b= "<<b<<endl;
    cout<<"Third number c= "<<c<<endl;}
    
    else{
    a=a*b*c;
    b=a/(b*c);
    c=a/(b*c);
    a=a/(b*c);
    cout<<"First number replaced by third: "<<a<<endl;
    cout<<"second number replaced by first: "<<b<<endl;
    cout<<"Third number replaced by second: "<<c<<endl;}
    
    return 0;
}