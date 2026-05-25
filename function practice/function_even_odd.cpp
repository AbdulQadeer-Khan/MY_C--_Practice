#include <iostream>
using namespace std;
int number(int a);

int main(){
    int a;

    cout<<"Enter any number to find it is even or odd ";
    cin>>a;

    number(a);
    return 0;

}

int number(int a){
    if (a%2==0){cout<<"the given number is even";}
    else {cout<<"the given number is odd";}
    return 0;
}