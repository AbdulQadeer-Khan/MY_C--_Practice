#include <iostream>
using namespace std;
int main(){
    int i=0,j;
    cout<<"Enter a number:";
    cin>>j;
    while(i!=j){
        cout<<i<<endl;
        i++;
    }
    cout<<endl;
    while(j!=0){
        cout<<j<<endl;
        j--;
    }
    cout<<endl;
    return 0;
}