#include <iostream>
using namespace std;
int main()
{
    int x,i=1;
    cout<<"Enter a number to increase it by one ten time";
    cin>>x;
    
    cout<<x<<"*"<<i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    cout<<x<<"*"<<++i<<"="<<x*i<<endl;
    return 0;
}