#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string name[3];
    string sub[4];
    int marks[3][4];
    for(int i=0;i<3;i++){
        cout<<"Enetr student name:";
        getline(cin,name[i]);
        
    }
    for(int j=0;j<4;j++){
        cout<<"Enter subject name:";
        getline(cin,sub[j]);

    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"Marks obtained by student"<<name[i]<<" in subject "<<sub[j]<<endl;
            cin>>marks[i][j];
        }
    }
    cout<<left<<setw(9)<<"NAME";
    for(int j=0;j<4;j++){
        cout<<setw(6)<<sub[j]<<"\t";    
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<left<<setw(9)<<name[i]<<"\t";
        for(int j=0;j<4;j++){
            cout<<setw(6)<<marks[i][j]<<"\t";

        }
        cout<<endl;
    }
return 0;

}