#include <iostream>
#include <string>
using namespace std;

int main(){
    double templog [3][4];
    string timeshift[4]={"Morning","Noon","Evening","Night"};
   
    for(int i=0;i<3;i++){
         
        cout<<"Enter the temperature of the patient:"<<i+1<<" in Celsius "<<endl;
       
        for(int j=0;j<4;j++){
            cout<<" "<<timeshift[j]<<":";
            cin>>templog[i][j];
               
        }
         
        cout<<endl;

    }

    for(int i=0;i<3;i++){
        double average=0;

        for(int j=0;j<4;j++){
            average+=templog[i][j];
            if(templog[i][j]>38.0){
                cout<<"In "<<timeshift[j]<<" Patient "<<i+1<<" Has High Fever! "<<endl; }
        }
        average=average/4;
        cout<<"The Average temperature of Patient:"<<i+1<<" is:"<<average<<endl;
    }
    
    return 0;
}