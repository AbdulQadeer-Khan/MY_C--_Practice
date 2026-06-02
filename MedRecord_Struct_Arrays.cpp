#include <iostream>
#include <string>
using namespace std;
struct Patient{
    string name;
    int age;
    int systolicBP;
};

int main(){
    Patient data[3];
    char high;

   for(int i=0;i<3;i++){
    cout<<"Enter Data for Patient "<<i+1<<":"<<endl;
    cout<<"Name:";
    cin>>data[i].name;
    cout<<"Age:";
    cin>>data[i].age;
    cout<<"BP:";
    cin>>data[i].systolicBP;
    
   
   }

   for(int i=0;i<3;i++){
    high=' ';
    
    if(data[i].systolicBP>130){high='*';}
    cout<<"Systolic Pressure of "<<data[i].name<<" is:"<<data[i].systolicBP<<high<<" and is "<<data[i].age<<" years old "<<endl;
   }
}