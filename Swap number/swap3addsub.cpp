#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number a= ";
    cin>>a;
    cout<<"Enter second number b= ";
    cin>>b;
    cout<<"Enter third number c= ";
    cin>>c;

    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);

    cout<<"First number a= "<<a<<endl;
    cout<<"Second number b= "<<b<<endl;
    cout<<"Third number c= "<<c<<endl;

    return 0;

}