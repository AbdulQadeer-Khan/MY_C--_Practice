#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter any number";
    cin>>a;
     cout<<"Enter any number";
    cin>>b;
     cout<<"Enter any number";
    cin>>c;
     cout<<"Enter any number";
    cin>>d;
    if(a>b&&a>c&&a>d){cout<<"Largest number: "<<a;}
    else if(b>a&&b>c&&b>d){cout<<"Largest number: "<<b;}
    else if(c>a&&c>b&&c>d){cout<<"Largest number: "<<c;}
    else if(d>a&&d>b&&d>c){cout<<"Largest number: "<<d;}
    
    return 0;
}