#include <iostream>
using namespace std;
int main()
{
    int num,ans1,ans2,ans3,ans4,ans5,ans6,rev;
    cout<<"Enter six digits number only";
    cin>>num;
    ans1=((num%10000)%10)*100000;
    num=num/10;
    ans2=((num%10000)%10)*10000;
    num=num/10;
    ans3=((num%10000)%10)*1000;
    num=num/10;
    ans4=((num%10000)%10)*100;
    num=num/10;
    ans5=((num%10000)%10)*10;
    ans6=num/10;
    rev=ans1+ans2+ans3+ans4+ans5+ans6;
    cout<<rev;
    return 0;

}