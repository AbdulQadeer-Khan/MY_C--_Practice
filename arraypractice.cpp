#include <iostream>
using namespace std;
int main(){
    int array1[5];
    for(int i=0;i<5;i++){
        cin>>array1[i];
    }
    cout<<endl;
    array1[0]=array1[0]+array1[4]+array1[1]+array1[2]+array1[3];
    array1[1]=array1[0]-(array1[4]+array1[1]+array1[2]+array1[3]);
    array1[2]=array1[0]-(array1[4]+array1[1]+array1[2]+array1[3]);
    array1[3]=array1[0]-(array1[4]+array1[1]+array1[2]+array1[3]);
    array1[4]=array1[0]-(array1[4]+array1[1]+array1[2]+array1[3]);
    array1[0]=array1[0]-(array1[4]+array1[1]+array1[2]+array1[3]);
    for(int i=0;i<5;i++){
        cout<<array1[i]<<endl;
    }

    return 0;
}