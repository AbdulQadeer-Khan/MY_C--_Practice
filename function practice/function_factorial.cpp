#include <iostream>
using namespace std;
int factorial(int a,int b);

int main(){
    int a,b=1;
    
    cout<<"Enter any number to find its factorial ";
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<factorial(a,b);
    return 0;
}

int factorial(int a,int b){
    while(a!=1){
    
        b=b*a;
        a--;
    }
 return b;
}