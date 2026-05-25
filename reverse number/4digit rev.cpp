#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,ans1,ans2,ans3,ans4,rev;
    cout<<"Enter four digit number only ";
    cin>>setw(3)>>num;
    ans1=((num%100)%10)*1000;
    num=num/10;
    ans2=((num%100)%10)*100;
    num=num/10;
    ans3=((num%100)%10)*10;
    ans4=num/10;
    rev=ans1+ans2+ans3+ans4;
    cout<<rev;
    return 0;

}