#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 int num,ans1,ans2,ans3,rev;
    cout<<"Enter three digits number only ";
    cin>>num;
    //if(num>999){cout<<"Enter three digits number only ";
    //cin>>num;}
    if(num<99&&num>999){cout<<"Enter three digit number only ";
    cin>>num;
 ans1=(num%10)*100;
 num=num/10;
 ans2=(num%10)*10;
 ans3=num/10;
 rev=ans1+ans2+ans3;
 cout<<rev;  }
 else {cout<<"invalid number";} 

    return 0;
}