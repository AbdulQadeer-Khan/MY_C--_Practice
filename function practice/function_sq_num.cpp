#include <iostream>
using namespace std;
int square(int a);

int main()
{
    int a;

    cout<<"Enter any number to find its square ";
    cin>>a;

    cout<<"The square of the given number is"<<square(a);
    
    return 0;
}

int square(int a)
{
    return a*a;
}