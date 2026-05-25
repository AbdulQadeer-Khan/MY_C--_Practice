#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
using namespace std;
int main()
{
    time_t now=time(0);
    tm *ltm=localtime(&now);
    int b_y;
    int b_m;
    int b_d;
    cout<< "To find your age."<<endl;
    cout<< "Type your birth year:";
    cin >> b_y;
    cout<< "Enter your birth month: ";
    cin >> b_m;
    cout << "Enter birth date: ";
    cin>> b_d;
    int age;
    int mage;
    int dage;
   

    dage = b_d-(ltm->tm_mday);
    mage = (1+ltm->tm_mon)-b_m;
    age = (1900+ltm->tm_year)-b_y;
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"Processing your data\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"contacting NASA\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "you are "<< age <<" years "<<mage<< " months and "<<dage<<" days "<<ltm->tm_min<<" minutes"<<" "<<ltm->tm_sec<<" seconds old";
    return 0;
}