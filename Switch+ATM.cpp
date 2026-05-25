#include <iostream>
using namespace std;
int main()
{
    int balance=10000, withdraw, deposit,send,num,pin,act_num;
    char again;
    cout<<"Enter your 4 digits pin:";
    cin>>pin;
    switch(pin){
       do{ case 1234:
        cout<<"________ATM________\n";
        cout<<"|1. Check Balance |\n";
        cout<<"|2. Cash Withdrawl|\n";
        cout<<"|3. Deposit Cash  |\n";
        cout<<"|4. Send money    |\n";
        cout<<"Enter Respective Number:";
        cin>>num;
        
        switch (num){
        case 1:
        cout<<"Your current balance is:"<<balance<<endl;
        break;
        case 2:
        cout<<"How much money you want to withdraw:";
        cin>>withdraw;
        (withdraw>balance)?
        cout<<"Not enough balance!":
        cout<<"your balance after withdrawl is:"<<balance-withdraw;
        break;
        case 3:
        cout<<"How much cash do you wanr to deposit? ";
        cin>>deposit;
        cout<<"After depositing "<<deposit<<" your new balance is:"<<balance+deposit;
        break;
        case 4:
        cout<<"Enter reciever's account number:";
        cin>>act_num;
        cout<<"How much you want to transfer? ";
        cin>>send;
        (send>balance)?
        cout<<"Not enough balance!":
        cout<<send<<" is transfered to "<<act_num<<" your new balance is:"<<balance-send;
        break;
        default:
        cout<<"Invalid Number!";
        break;}
        cout<<"\nBack to MENU for yes(Y/y) to exit press any other key:";
        cin>>again;
        }while(again=='Y'||again=='y');
        cout<<"Thank you for using ATM";

        break;
        default:
        cout<<"Wrong PIN";
        break;
    }
    return 0;
}
