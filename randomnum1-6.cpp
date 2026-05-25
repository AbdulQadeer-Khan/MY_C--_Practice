#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int a;
    do{
    int i=rand()%6+1;
    int j=rand()%6+1;
    cout<<"Random number 1 = "<<i<<"\nRandom number 2 = "<<j<<endl;
    
    cin>>a;

    }while(a==1);
    return 0;

}