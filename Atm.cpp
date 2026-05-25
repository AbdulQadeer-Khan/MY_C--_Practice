#include <iostream>
using namespace std;
int main()
{
    int choice=0,deposit,withdraw;
    float balance=10000;

    
    
    while(choice!=4){
    cout<<"\n-------ATM MENU---------\n";
    cout<<"1.  Check Balance"<<endl;
    cout<<"2.  Deposit      "<<endl;
    cout<<"3.  Withdraw     "<<endl;
    cout<<"4.  Exit         "<<endl;
    cout<<"What service do you want?";
    cin>>choice;
     if(choice==1){cout<<"Your current balance is:"<<balance<<endl;}
    else if(choice==2){cout<<"How much you want to deposit:";cin>>deposit;
    cout<<"Your new balance is "<<deposit+balance<<endl;}
    deposit=deposit+balance;
    if(choice==3){cout<<"How much you want to withdraw:";
    cin>>withdraw;
    if(withdraw>balance){cout<<"Insufficient balance";}}
    else if(choice==4){cout<<"Thank you for using our ATM";}

    }
    return 0;

}