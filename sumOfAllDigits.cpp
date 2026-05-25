#include <iostream>
using namespace std;
int main()
{
    int a,ans1,ans2,ans3,ans4;
    cout<<"Enter a number: ";
    cin>>a;
    ans1=a%10;
    a=a/10;
    ans2=a%10;
    a=a/10;
    ans3=a%10;
    ans4=a/10;
    if(ans1>ans2&&ans1>ans3&&ans1>ans4){cout<<"The biggest digit in given number is: "<<ans1<<endl;}
    else if(ans2>ans1&&ans2>ans3&&ans2>ans4){cout<<"The biggest digit in given number is: "<<ans2<<endl;}
    else if(ans3>ans1&&ans3>ans2&&ans3>ans4){cout<<"The biggest digit in given number is: "<<ans3<<endl;}
    else if(ans4>ans1&&ans4>ans2&&ans4>ans3){cout<<"The biggest digit in given number is: "<<ans4<<endl;}
    return 0;
    

}