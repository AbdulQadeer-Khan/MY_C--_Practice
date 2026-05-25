#include <iostream>
using namespace std;
int main()
{
    int eng,math,bio;
    cout<<"Enter marks obtained in English: ";
    cin>>eng;
    cout<<"Enter marks obtained in math: ";
    cin>>math;
    cout<<"Enter marks obtained in biology: ";
    cin>>bio;
    if(eng<40||math<40||bio<40){cout<<"you are failed";}
    else if(eng>=40&&math>=40&&bio>=40){cout<<"You are passed";}
    if(eng>=90||math>=90||bio>=90){cout<<" And are eligible for scholarship";}
     else{cout<<" but are not eligible for scholarship";}
     return 0;
}