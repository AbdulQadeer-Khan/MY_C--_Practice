#include <iostream>
#include <string>
using namespace std;

class student {
    private:

    string name;
    int rollno;
    double marks;

    public:
    student(string n,int r,double m){
        name=n;
        rollno=r;
        marks=m;

        
    }
    

    void info(){
        cout<<"Name of the student:"<<name<<endl;
        cout<<"Roll Number of the student:"<<rollno<<endl;
        cout<<"Marks obtained by the student:"<<marks<<endl;
    }

};

int main (){
    student S1("abdul",01,100);
    student S2("Ali",02,89);

    S1.info();
    cout<<endl;
    S2.info();

    return 0;

}