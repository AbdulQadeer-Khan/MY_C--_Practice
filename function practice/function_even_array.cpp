#include <iostream>
using namespace std;

int even_count(int arr[]);

int main(){
    int arr[5];
    cout<<"enter values in array"<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    cout<<"There are "<<even_count(arr)<<" even numbers in the array"<<endl;
    return 0;
}
int even_count(int arr[]){
    int even=0;
    for (int i=0;i<=4;i++){
        if (arr[i]%2==0){even++;}
    }
    return even;
}