#include <iostream>
using namespace std;
int num(int a);

int main(){
    int a;
    cout<<"enter any number to find it is positive, negative or zero ";
    cin>>a;
    num(a);
    return 0;
}
int num(int a){
    if(a>0){cout<<"number is positive";}
    else if (a<0){cout<<"number is negative";}
    else {cout<<"number is zero";}
    return 0;
}