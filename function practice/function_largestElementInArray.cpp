#include <iostream>
using namespace std;
int largestinarray(int arr[]);

int main(){
    int arr[5];
    cout<<"enter values in the array"<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];

    }
    cout<<"the largest element in the array is: "<<largestinarray(arr)<<endl;
    return 0;
}

int largestinarray(int arr[]){
    int large=0;
    for (int i=0;i<=4;i++){
        if (large<arr[i]){large=arr[i];}
        
    }
    return large;

}