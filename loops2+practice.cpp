#include <iostream>
using namespace std;
int main(){
    int i,j=0;
    cout<<"enter a number";
    cin>>i;
    while(j!=i){
        j=j+i;
        i--;
        cout<<j<<endl;
    }
    return 0;
}