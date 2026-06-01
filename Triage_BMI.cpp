#include <iostream>
using namespace std;

double calculateBMI(double w,double h);

int main(){
    double w,h;

    cout<<"Enter patient Weight in kilograms:";
    cin>>w;
    cout<<"Enter patient height in meters:";
    cin>>h;

    double BMI=calculateBMI(w,h);

    cout<<"The patient BMI is :"<<BMI<<endl;
    if (BMI<18.5){cout<<"Patient is UNDERWEIGHT"<<endl;}
    else if(18.5<=BMI&&BMI<25){cout<<"Patient is of Normal weight"<<endl;}
    else if(25<=BMI&&BMI<30){cout<<"Patient is OverWeight"<<endl;}
    else {cout<<"Patient is OBESE"<<endl;}


    return 0;
}
double calculateBMI(double w,double h){
    
    return w/(h*h);
}