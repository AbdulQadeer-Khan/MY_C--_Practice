#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int i,j;
    srand(time(0));
    i=rand()%100+1;
    do{
    cout<<"Guess a number between 1-100:\n";
    cin>>j;
    if (j>i){cout<<"number is lower than"<<j<<endl;}
    else if(j<i){cout<<"number is higher than"<<j<<endl;}
    else{cout<<"You guessed the number right";}
    }while(j!=i);

}