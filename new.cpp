#include <iostream>
#include <iomanip>
using namespace std;
int a=25;
int main(){
    // int a=15;
    // cout<<"the value of local a is "<<a<<endl;
    // cout<<"the value of global a is "<<::a;
    // float a=3.1f;
    //  double b=4.4;
    // cout<<"value of a is "<<a<<" and the size of 3.1f is "<<sizeof(3.1)<<endl;
    // cout<<"value of b is "<<b<<" and the size of 4.4l is "<<sizeof(b);
    int a,b,c,d;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enetr c";
    cin>>c;
    cout<<"enter d";
    cin>>d;

    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;

    return 0;
}