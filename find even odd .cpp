#include <iostream>
using namespace std;
int main()
{
    int a,ans1,ans2,ans3,ans4,ans5,a1,a2,a3;
    cout<<"Enter a five digit number:";
    cin>>a;
    ans1=a%10;
    a1=a/10;
    ans2=a1%10;
    a2=a1/10;
    ans3=a2%10;
    a3=a2/10;
    ans4=a3%10;
    ans5=a3/10;
    if(a%2==0){cout<<"your given number is EVEN:"<<a<<endl;}
    else{cout<<"your given number is ODD:"<<a<<endl;}
    if(ans5%2==0){cout<<ans5<<" is EVEN\n";}
    else{cout<<ans5<<" is ODD\n";}
    if(ans4%2==0){cout<<ans4<<" is EVEN\n";}
    else{cout<<ans4<<" is ODD\n";}
    if(ans3%2==0){cout<<ans3<<" is EVEN\n";}
    else{cout<<ans3<<" is ODD\n";}
    if(ans2%2==0){cout<<ans2<<" is EVEN\n";}
    else{cout<<ans2<<" is ODD\n";}
    if(ans1%2==0){cout<<ans1<<" is EVEN\n";}
    else{cout<<ans1<<" is ODD\n";}
    return 0;

}