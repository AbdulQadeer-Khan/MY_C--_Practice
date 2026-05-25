#include <iostream>
using namespace std;
int main(){
    int a[10];
    int min,max;
    cout<<"Enter numbers";
    for(int i=0;i<10;i++){
    cin>>a[i];
    }
    min=a[0];
    for(int i=0;i<10;i++){
    if(a[i]<min){min=a[i];}
    }
    cout<<"minimum value is:"<<min<<endl;
}