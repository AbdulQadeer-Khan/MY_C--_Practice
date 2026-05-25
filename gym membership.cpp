#include <iostream>
using namespace std;
int main()
{
    int age,medi,student;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"do you have any medical issues: ";
    cout<<"\n1.yes"<<"\n0.no\n";
    cin>>medi;
    cout<<"Are you a student? ";
    cout<<"\n1.yes"<<"\n0.no\n";
    cin>>student;
    if(age>18&&medi==0){cout<<"\nyou can get membership ";}
    else{cout<<"\nYou cannot get membership ";}
    if(age<21||student==1||age>55){cout<<"\nDiscount available";}
    else{cout<<"\nNo discount";}
    return 0;
}