#include <iostream>
using namespace std;
void reverseArray(int arr[],int size);

int main (){
    int arr[100], size;
    cout<<"Enter size of the array \n";
    cin>>size;
    cout<<"Now enter "<<size<<" values in the array \n";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"revverse of the array is"<<endl;
    reverseArray(arr,size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while (start<end){
        int swap= arr[start];
        arr[start] =arr[end];
        arr[end]=swap;
        
        start++;
        end--;

    }
    
}