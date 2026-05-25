#include <iostream>
using namespace std;
int main()
{
    int num,ans1,ans2,rev;
    cout<<"Enter two digits number only ";
    cin>>num;
    ans1=num%10;
    ans2=num/10;
    rev=ans1+ans2;
    cout<<rev;
    return 0;
}