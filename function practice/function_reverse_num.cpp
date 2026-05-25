#include <iostream>
using namespace std;
int reve(int num);

int main(){
    int num;
    cout<<"enter any four digit number";
    cin>>num;
    cout<<"The reverse of "<<num<<" is :"<<reve(num);
    return 0;
}
int reve(int num){
    int revNum=0;
    while (num>0){
        int lastdigit=num%10;
        revNum=(revNum *10)+lastdigit;
        num=num/10;
    }
    return revNum;
    
}