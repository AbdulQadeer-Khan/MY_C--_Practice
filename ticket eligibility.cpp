#include <iostream>
using namespace std;
int main()
{
    int age,scard;
    cout<<"Do You have a student card: \n";
    cout<<" 1. yes \n";
    cout<<" 0. no \n";
    cin>>scard;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>=13){cout<<"\nyou are allowed to watch movie";}
    else {cout<<"\nyou are not eligible ";}
    if(age<18||age>60||scard==1){cout<<"\nDiscount available";}
    else{cout<<" \nNo discount!";}
    return 0;
}