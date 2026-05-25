#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int m,a,e;
    time_t now=time(0);
    tm *ltm=localtime(&now);
     
    if (ltm->tm_hour>=5&&ltm->tm_hour<=11)
    {
        cout<<"Good Morning\n";
        cout<<"How are you feeling?\n";
        cout<<"1. Happy\n";
        cout<<"2. Sad\n";
        cout<<"3. Tired\n";
        cin>>m;

        switch (m){
            case 1:
            cout<<"Go for a jog";
            break;
            case 2:
            cout<<"Drink some Coffee or listen to3 Music";
            break;
            case 3:
            cout<<"Sleep a bit more";
            break;
            default:
            cout<<"Invalid number";
            break;
        }
    }

    else if (ltm->tm_hour>=12&&ltm->tm_hour<=16)
    {
        cout<<"Good afternoon\n";
        cout<<"How are you feeling?\n";
        cout<<"1. Happy\n";
        cout<<"2. Sad\n";
        cout<<"3. Tired\n";
        cin>>a;

        switch (a){
            case 1:
            cout<<"Work on a Project";
            break;
            case 2:
            cout<<"Talk to a Friend";
            break;
            case 3:
            cout<<"Take a Nap";
            break;
            default:
            cout<<"Invalid number";
            break;}
    }

    else if(ltm->tm_hour>=16&&ltm->tm_hour<=20)
    {
        cout<<"Good afternoon\n";
        cout<<"How are you feeling?\n";
        cout<<"1. Happy\n";
        cout<<"2. Sad\n";
        cout<<"3. Tired\n";
        cin>>e;

        switch (e){
            case 1:
            cout<<"Go out and Play a game";
            break;
            case 2:
            cout<<"Watch a movie";
            break;
            case 3:
            cout<<"Relax and Mediate";
            break;
            default:
            cout<<"Invalid number";
            break;}

    }

    else{
        cout<<"Its sleep time Leave your mobile";
    }
    
  
return 0;

}