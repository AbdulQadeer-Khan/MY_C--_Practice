#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    string pass="word";
    int att=3;
    
    
    cout<<"Your password contain four words from:  \r";
     cout.flush();
     this_thread::sleep_for(chrono::seconds(4));
    cout<<"P A S S W O R D                                  \n";
   
    while (att!=0)
            {cout<<"Enter password to open Mystery Door:";
            cin>>pass;
    if(pass=="word")
            {cout<<"Entrance Granted \r";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Door opened successfully";break;}
    else
            {cout<<"attempt lost \r";
            this_thread::sleep_for(chrono::seconds(2));
            cout.flush();
            cout<<"two attempts left\n";att--;}

    if(att==2)
            {cout<<"Your hint is: \r";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(2));
    
            cout<<"has (o)                \n";
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Enter password again\n";
            cin>>pass;
    if(pass=="word")
            {cout<<"Access Granted \r";
            this_thread::sleep_for(chrono::seconds(2));
            cout.flush();
            cout<<"Door opened successfully\n";break;}
    else
            {cout<<"attempt lost \r";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Last attempt!!\n";att--;}
    }
    
    if(att==1)
            {cout<<"hint \r";
            this_thread::sleep_for(chrono::seconds(2));
            cout.flush();
            cout<<"has (r) \n";
            this_thread::sleep_for(chrono::seconds(1));
            cout<<"Enter password again: ";
            cin>>pass;
    if(pass=="word")
            {cout<<"Access Granted \r";
            this_thread::sleep_for(chrono::seconds(2));
            cout.flush();
            cout<<"Door opened successfully\n";break;}
    else
            {cout<<"last attempt lost \r";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(1)); 
            cout<<"Emergency lock.         \r";att--;
            this_thread::sleep_for(chrono::seconds(2));}

    }
    
   
}
            this_thread::sleep_for(chrono::seconds(2));
            cout<<"Too many wrong attempts System locked for 10 seconds\r";
            this_thread::sleep_for(chrono::seconds(3));
 for(int i=10;i>=0;i--)
            {cout<<"Try again in "<<i<<" seconds                                          \r";
            cout.flush();
            this_thread::sleep_for(chrono::seconds(1));

 }
 this_thread::sleep_for(chrono::seconds(3));
 cout<<"system unlocked                      ";

    return 0;
}