#include <iostream>
#include <string>

struct Employee{
    int ID;
    std::string name;
    double hourlyRate;
    double hoursWorked;
};

int main(){
    int number_of_Employee=3;
    Employee data[number_of_Employee];

    for(int i=0;i<number_of_Employee;i++){

        std::cout<<"Enter the ID of Employee "<<i+1<<":";
        std::cin>>data[i].ID;
        std::cin.ignore();
        std::cout<<"Enter Name of Employee "<<i+1<<":";
        std::getline(std::cin,data[i].name);
        std::cout<<"Enter the Hourly rate of Employee "<<i+1<<":";
        std::cin>>data[i].hourlyRate;
        std::cout<<"Enter the Hours worked by the Employee "<<i+1<<":";
        std::cin>>data[i].hoursWorked;

    }
    double GrossPay;

    for(int i=0;i<number_of_Employee;i++){
        GrossPay=0;
        GrossPay=data[i].hourlyRate*data[i].hoursWorked;
        std::cout<<"Employee ID:"<<data[i].ID<<std::endl;
        std::cout<<"Employee Name:"<<data[i].name<<std::endl;
        std::cout<<"Hours Worked:"<<data[i].hoursWorked<<std::endl;
        std::cout<<"Has a Gross Pay of:"<<GrossPay<<std::endl;
        std::cout<<std::endl;

    }
    return 0;
}