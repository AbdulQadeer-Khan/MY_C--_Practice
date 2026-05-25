#include <iostream>
using namespace std;
int large(int a,int b);
int main(){
    int a,b;
    cout<<"Enter any two numbers";
    cin>>a>>b;
    large(a,b);
    return 0;
}

int large(int a,int b){
    if (a>b){cout<<a<<" is greater than "<<b<<endl;}
    else{cout<<b<<" is greater than "<<a<<endl;}
    return 0;
}