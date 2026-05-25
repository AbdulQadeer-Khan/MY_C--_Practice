#include <iostream>
using namespace std;
int main()
{
    int num,ans1,ans2,ans3,ans4,ans5,rev;
    cout<<"Enter five digits number only ";
    cin>>num;
    ans1=((num%1000)%10)*10000;
    num=num/10;
    ans2=((num%1000)%10)*1000;
    num=num/10;
    ans3=((num%1000)%10)*100;
    num=num/10;
    ans4=((num%1000)%10)*10;
    ans5=num/10;
    rev=ans1+ans2+ans3+ans4+ans5;
    cout<<rev;
    return 0;
}