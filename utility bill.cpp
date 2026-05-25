#include <iostream>
using namespace std ;
int main ()
{
    int units,customer;
    cout<<"What type of customer are you?\n";
    cout<<"1. Home\n";
    cout<<"2. Commercial\n";
    cout<<"3. Industrial\n";
    cout<<"Enter the respective number:";
    cin>>customer;
    if(customer==1)
    {
        cout<<"How much units you have consumed";
        cin>>units;
        if(units<=100){cout<<"your total bill is:"<<units*10;}
        else if(units<=300){cout<<"Your total bill is:"<<units*15;}
    }
}