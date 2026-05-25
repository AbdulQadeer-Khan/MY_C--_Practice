#include <iostream>
using namespace std;
int main()
{ 
    float meter;
    float seconds;
    float speed;

    cout << "To find the speed of a body"<<endl;
    cout <<" Enter distance covered by the body: ";
    cin >> meter;
    cout << "Now enter the time taken by the body: ";
    cin >>seconds;
    
    speed = meter/seconds;

    cout <<"Speed = "<<speed<<" m/s";
    return 0;

}