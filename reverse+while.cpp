#include <iostream>
using namespace std;
int main(){
    int num,sum=0,i,rev=0;
    cout<<"Enter a number";
    cin>>num;
    if (num%2==0){cout<<" Given Number is Even:"<<num<<endl;}
    else{cout<<" Given Number is Odd:"<<num<<endl;}
    if (num>0){cout<<" Given Number is Positive:"<<num<<endl;}
    else if (num<0){cout<<" Given Number is Negative:"<<num<<endl;}
    else{cout<<" Given Number is Zero:"<<num<<endl;}
    while(num!=0){
        i=num%10;
        sum=sum+i;
        rev=rev*10+i;
        num=num/10;
    }
    cout<<"Sum of the given number "<<num<<" is "<<sum<<endl;
    cout<<"Reverse of given number "<<num<<" is "<<rev<<endl;
    return 0;
}