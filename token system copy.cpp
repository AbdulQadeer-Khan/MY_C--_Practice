#include <iostream>
#include <string>
using namespace std;
int main(){
    string name,purpose;
    int token =1;
    cout<<"\n-------Token Generator--------\n";
   while (token!=10){ cout<<"Enter your full name ";
    getline(cin,name);
    cout<<"What is the purpose ";
    getline(cin,purpose);

    cout<<"\n-------Your Token--------\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Reason: "<<purpose<<endl;
    cout<<"Token number: "<<token<<endl;
    cout<<"---------------------------\n";
    token++;}
    return 0;

}