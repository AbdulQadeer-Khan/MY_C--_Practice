#include <iostream>
#include <string>
using namespace std;

int main(){
    string itemname[5]={"Gloves","Masks","Syringes","Bandages","Sanitizers"};
    int quantity[5]={6,10,15,9,12},sum=0;
    for (int i=0;i<5;i++){
        if (quantity[i]<10){
            cout<<"URGENT REORDER !! only:"<<quantity[i]<<" "<<itemname[i]<<" are left"<<endl;
        }
        else {cout<<"Sufficient amount of "<<itemname[i]<<" are left:"<<quantity[i]<<endl;}

        sum+=quantity[i];
        

    }
    cout<<sum<<" Inventory items are available"<<endl;

    return 0;
}