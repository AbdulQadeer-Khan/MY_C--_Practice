#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of the Month:";
    cin>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        cout<<"Month number "<<m<<" has 31 Days in it";
    
    }
    else if(m==4||m==6||m==9||m==11){
        cout<<"Month number "<<m<<" has 30 Days in it";
    }
    else {cout<<"Month number "<<m<<" has 28 or 29 Days in it";}
    return 0;
}