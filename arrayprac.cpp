#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter numbers in array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]<arr[i+1]){cout<<"array is in ascending order"<<endl;}
        
        
    }
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i+1]){cout<<"array is in descending order"<<endl;}
        
        
    }
    return 0;
}