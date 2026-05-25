#include <iostream>
using namespace std;
int reverseArray(int arr[],int size);

int main (){
    int arr[5], size;
    cout<<"Enter size of the array \n";
    cin>>size;
    cout<<"Now enter "<<size<<" values in the array \n";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"revverse of the array is"<<reverseArray(arr,size)<<endl;
    return 0;
}

int reverseArray(int arr[],int size){
    int lastdigit;
    int revarr[size];
    for (int i=0;i<size;i++){
        while(arr[i]>0){
            lastdigit=arr[i]%10;
            revarr[i]=(revarr[i]*10) + lastdigit;
            arr[i]=arr[i]/10;
        }
        
    }
    
    for (int i=0;i<size;i++){
        return revarr[i];
    }
}