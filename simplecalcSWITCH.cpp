#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number number:";
    cin>>b;
    cout<<"Enter operator:";
    cin>>c;
    switch (c)
    {
        case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
        case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
        case '/':
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
        case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
        case '%':
        cout<<a<<" % "<<b<<" = "<<a%b;
        break;
        default:
        cout<<"Invalid number or operator!";
    }
    return 0;
}