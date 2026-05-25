#include <iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;
}
int sum(int a,int b){
    cout<<"The sum of the given numbers is "<<a+b<<endl;
    return 0;

}