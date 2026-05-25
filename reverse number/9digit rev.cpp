#include <iostream>
using namespace std;
int main()
{
    int num,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,rev;
    cout<<"Enter nine digits number only";
    cin>>num;
    if(num>999999999||num<99999999){cout<<"Invalid number";}
    else {
    ans1=((num%10000000)%10)*100000000;
    num=num/10;
    ans2=((num%10000000)%10)*10000000;
    num=num/10;
    ans3=((num%10000000)%10)*1000000;
    num=num/10;
    ans4=((num%10000000)%10)*100000;
    num=num/10;
    ans5=((num%10000000)%10)*10000;
    num=num/10;
    ans6=((num%10000000)%10)*1000;
    num=num/10;
    ans7=((num%10000000)%10)*100;
    num=num/10;
    ans8=((num%10000000)%10)*10;
    ans9=num/10;
    rev=ans1+ans2+ans3+ans4+ans5+ans6+ans7+ans8+ans9;
    cout<<rev;}
    return 0;

}