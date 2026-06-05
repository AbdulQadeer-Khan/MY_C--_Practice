#include <iostream>
#include <string>

struct Vitals{
    std::string BP;
    int HeartRate;
    double Temp;

};
struct MedicalRecord{
    int Patientid;
    std::string Name;
    Vitals Patientvitals;
};
void info(const MedicalRecord& data){
    std::cout<<"Patient Name:"<<data.Name<<std::endl;
    std::cout<<"Patient ID:"<<data.Patientid<<std::endl;
    std::cout<<"Patient Vitals:"<<std::endl<<"Blood Pressure:"<<data.Patientvitals.BP<<std::endl;
    std::cout<<"Heart rate:"<<data.Patientvitals.HeartRate<<std::endl;
    std::cout<<"Patient Temperature:"<<data.Patientvitals.Temp<<std::endl;
}
int main(){
    MedicalRecord Data;
    std::cout<<"Enter Patient Name:";
    std::getline(std::cin,Data.Name);
    std::cout<<"Enter Patient ID:";
    std::cin>>Data.Patientid;
    std::cin.ignore();
    std::cout<<"Enter Patient BP as 120/80:";
    std::cin>>Data.Patientvitals.BP;
    std::cin.ignore();
    std::cout<<"Enter Patient Heart Rate:";
    std::cin>>Data.Patientvitals.HeartRate;
    std::cout<<"Enter Patient Temperature:";
    std::cin>>Data.Patientvitals.Temp;
    std::cout<<"DETAILS OF PATIENT"<<std::endl;
    
    info (Data);
    return 0;
}