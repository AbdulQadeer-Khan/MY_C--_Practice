#include <iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3,sub4;
    char grade;
    float percentage,total;
    cout<<"Enter marks obtained in English: ";
    cin>>sub1;
    cout<<"Enter marks obtained in Maths: ";
    cin>>sub2;
    cout<<"Enter marks obtained in Urdu: ";
    cin>>sub3;
    cout<<"Enter marks obtained in physics: ";
    cin>>sub4;
    total=sub1+sub2+sub3+sub4;
    percentage=(total/400)*100;
    if(percentage>=90){grade='A';}
    else if(percentage>=80&&percentage<90){grade='B';}
    else if(percentage>=70&&percentage<80){grade='C';}
    else if(percentage>=60&&percentage<70){grade='D';}
    else if(percentage>=50&&percentage<60){grade='F';}
    cout<<"\n-------DMC--------\n";
    cout<<"English:     "<<sub1<<endl;
    cout<<"Math:        "<<sub2<<endl;
    cout<<"Urdu:        "<<sub3<<endl;
    cout<<"Physics:     "<<sub4<<endl;
    cout<<"Total marks: "<<total<<endl;
    cout<<"Percentage:  "<<percentage<<"%"<<endl;
    cout<<"Grade:       "<<grade<<endl;
    return 0;
}