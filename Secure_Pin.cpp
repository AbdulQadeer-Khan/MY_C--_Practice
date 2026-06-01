#include <iostream>
using namespace std;

int main(){
    int pin=2026;
    int pass,att=3;
    bool Access=false;
    do{
    cout<<"Enter 4 digits Password to get access :";
    cin>>pass;
    att--;

    if (pass==pin)
    {
        cout<<"Access Granted.";
        Access=true;
        break;
    }

    else if (att>0)
    {
        cout<<"Wrong Password! Try Again "<<att<<" Attempts Left."<<endl  ; 
    }
      }while(att>0);

      if(!Access){cout<<"System Locked! "<<endl;}

    return 0;

}