#include <iostream>
using namespace std;
int main()
{
    float tmarks;
    float obmarks;
    float percentage;

    cout<<"Enter total marks: ";
    cin>>tmarks;
    cout<<"Enter obtained marks: ";
    cin>>obmarks;

    percentage=(obmarks/tmarks)*100;
    cout<<"Your percentage is: "<<percentage<<"%";
    return 0;
}