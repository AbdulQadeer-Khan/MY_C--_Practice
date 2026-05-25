#include <iostream>
using namespace std;

int element_search(int arr[],int n);

int main(){
    int arr[5]= {2,4,9,1,7},n;

    cout<<"enter a number to find it is included in the array or not "<<endl;
    cin>>n;
    if (element_search(arr,n))
    {
        cout<<"number found";
    }
    else
    {
        cout<<"number not found";
    }
    return 0;

}

int element_search(int arr[], int n){
    bool found=false;

    for(int i=0;i<=4;i++)
    {    
        if (n==arr[i]){found=true; break;} 
         
    }
    return found;
}