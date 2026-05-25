#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    string uname="admin",spass="blue";
    int pass=1234,scpass=9999,fpass;
    cout<<"Enter your username: ";
    cin>>uname;
    cout<<"Enter your password: ";
    cin>>pass;
    if(uname=="admin"&&pass==1234){cout<<"Logged in successfully\n";
    cout<<"\n-----------------------------\n";
cout<<"username: "<<uname<<endl;
cout<<"password: "<<pass<<endl;
cout<<"Security key: "<<scpass<<endl;
cout<<"Security password: "<<spass<<endl;}
else{cout<<"Forgot your password?\n ";
cout<<"1. Yes \n";
cout<<"0. No \n";
cin>>fpass;}
if(fpass==1){cout<<"Enter your security key: ";
cin>>scpass;
cout<<"Enter your security password: ";
cin>>spass;
if(spass=="blue"||scpass==9999){cout<<"Logged in successfully\n";
    cout<<"\n-----------------------------\n";
cout<<"username:admin "<<endl;
cout<<"password:1234 "<<endl;
cout<<"Security key:9999 "<<endl;
cout<<"Security password:blue "<<endl;}
else{cout<<"Login failed";}}
else if(fpass==0){cout<<"Try again later";}

   
return 0;

    }