#include <iostream>
using namespace std;
int sumofarray(int arr[]);

int main(){
    int arr[5];
    cout<<"Enter values in the array";

    for (int i=0;i<=4;i++){
        cin>>arr[i];
    }

    cout<<"the sum of all elements of the array is "<<sumofarray(arr)<<endl;
    return 0;
}

int sumofarray(int arr[]){
    int b=0;
    for (int i=0;i<=4;i++){
        b+=arr[i];

    }
    return b;
}
