#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int t12;
time_t now=time(0);
tm *ltm=localtime(&now);
cout<<"Which pattern you want to see time\n";
cout<<"1.  12 Hour-time\n";
cout<<"2.  24 Hour-time\n"<<"Enter respective number:";
cin>>t12;
if(t12==1){

cout<<1900+ltm->tm_year<<" year"<<endl;
cout<<1+ltm->tm_mon<<" month"<<endl;
cout<<ltm->tm_mday<<" day"<<endl;
cout<<ltm->tm_hour<<" hour"<<endl;
cout<<ltm->tm_min<<" minutes"<<endl;
cout<<ltm->tm_sec<<" seconds"<<endl;}

else if(t12==2){
cout<<1900+ltm->tm_year<<" year"<<endl;
cout<<1+ltm->tm_mon<<" month"<<endl;
cout<<ltm->tm_mday<<" day"<<endl;
cout<<(ltm->tm_hour)-12<<" hour"<<endl;
cout<<ltm->tm_min<<" minutes"<<endl;
cout<<ltm->tm_sec<<" seconds"<<endl;
    }
    else cout<<"Invalid number";
    return 0;
}