#include <iostream>
using namespace std;
int main()
{
    int h,o;
    cout<<"Are you hungry??\n";
    cout<<"Enter any key form 1-9 for (Yes) and 0 for (No):";
    cin>>h;
    if (h==0)cout<<"Come back when you are hungry!!";
    else {

        cout<<"------------MENU-------------\n";
        cout<<"1. BURGER\n";
        cout<<"2. PIZZA\n";
        cout<<"3. BIRYANI\n";
        cout<<"4. FRIES\n";
        cout<<"which one are you ordering??";
        cin>>o;
        switch(o){
            case 1:
            cout<<"your Burger will get to you in 10 minutes";
            break;
            case 2:
            cout<<"your Pizza will get to you in 10 minutes";
            break;
            case 3:
            cout<<"your Biryani will get to you in 10 minutes";
            break;
            case 4:
            cout<<"your Fries will get to you in 10 minutes";
            break;
            default:
            cout<<"Not included in MENU";
            break;
        }
    }
    return 0;
}