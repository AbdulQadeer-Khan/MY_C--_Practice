#include <iostream>
using namespace std;
int main()
{
    string name;
    char grade;
    grade='A';
 int roll,smarks;
 double eng,math,prog,phy,sert,ict,qe,qm,qp,qph,qs,qi,mpe,mpm,mpp,mpph,mps,mpi;
 double total, percentage,tpe,tpm,tpp,tpph,tps,tpi;
 smarks=100;
 cout<<"Enter your name: ";
 getline(cin,name);
 cout<<"Enter your roll number: ";
 cin>>roll;
 cout<<"Enter marks obtained in final English: ";
 cin>>eng;
 cout<<"Enter marks obtained in mid English: ";
 cin>>mpe;
 cout<<"Enter marks in english quiz: ";
 cin>>qe;
 cout<<"Enter marks obtained in final math: ";
 cin>>math;
 cout<<"Enter marks in mid math: ";
 cin>>mpm;
 cout<<"Enter marks in math quiz: ";
 cin>>qm;
 cout<<"Enter marks obtained in final Programming: ";
 cin>>prog;
 cout<<"Enter marks obtained in mid programming: ";
 cin>>mpp;
 cout<<"Enter marks in programming quiz: ";
 cin>>qp;
 cout<<"Enter marks obtained in final Physics: ";
 cin>>phy;
 cout<<"Enter the marks obtained in mid Physics: ";
 cin>>mpph;
 cout<<"Enter marks in physics quiz: ";
 cin>>qph;
 cout<<"Enter marks obtained in final Serat: ";
 cin>>sert;
 cout<<"Enter the marks obtained in mid Serat: ";
 cin>>mps;
 cout<<"Enter marks obtained in serat quiz: ";
 cin>>qs;
 cout<<"Enter marks obtained in final I.C.T: ";
 cin>>ict;
 cout<<"Enter the marks obtained in mid I.C.T: ";
 cin>>mpi;
 cout<<"Enter marks obtained in I.C.T quiz: ";
 cin>>qi;
 total=eng+math+prog+phy+sert+ict+qe+qm+qp+qph+qs+qi+mpe+mpm+mpp+mpph+mps+mpi;
 percentage=(total/600)*100;
 tpe=eng+qe+mpe;
 tpm=math+qm+mpm;
 tpp=prog+qp+mpp;
 tpph=phy+qph+mpph;
 tps=sert+qs+mps;
 tpi=ict+qi+mpi;
 if(eng>60){eng=30;}
 if(qe>20){qe=10;}
 if(mpe>20){mpe=10;}
 if(tpe>100){tpe=50;}
 if(math>60){math=30;}
 if(qm>20){qm=10;}
 if(mpm>20){mpm=10;}
 if(tpm>100){tpm=50;}
 if(prog>60){prog=30;}
 if(qp>20){qp=10;}
 if(mpp>20){mpp=10;}
 if(tpp>100){tpp=50;}
 if(phy>60){phy=30;}
 if(qph>20){qph=10;}
 if(mpph>20){mpph=10;}
 if(tpph>100){tpph=50;}
 if(sert>60){sert=30;}
 if(qs>20){qs=10;}
 if(mps>20){mps=10;}
 if(tps>100){tps=50;}
 if(ict>60){ict=30;}
 if(qi>20){qi=10;}
 if(mpi>20){mpi=10;}
 if(tpi>100){tpi=50;}
 if(total>600){total=300;}
 if(percentage>100){percentage=50;}
 if(percentage>=85){grade='A';}
 else if(percentage<85&&percentage>=75){grade='B';}
 else if(percentage<75&&percentage>=65){grade='C';}
 else if(percentage<65&&percentage>=55){grade='D';}
 else if(percentage<55&&percentage>=40){grade='F';}
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"             D E T A I L E D  M A R K S  C E R T I F I C A T E"<<endl;
 cout<<"Name: "<<name<<endl;
 cout<<"Roll no.: "<<roll<<endl;
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"Sr.no.  "<<"Subject "<<"    "<<"Total Marks"<<"    "<<" M a r k s      o b t a i n e d "<<endl;
 cout<<"                                   "<<"Final Paper"<<"   "<<"Mid Paper"<<"   "<<"Quiz"<<"   "<<"Total"<<endl;
 cout<<"  1.    "<<"English "<<"       "<<smarks<<"             "<<eng<<"           "<<mpe<<"        "<<qe<<"     "<<tpe<<endl;
 cout<<"  2.    "<<"Math    "<<"       "<<smarks<<"             "<<math<<"           "<<mpm<<"        "<<qm<<"     "<<tpm<<endl;
 cout<<"  3.    "<<"programming"<<"    "<<smarks<<"             "<<prog<<"           "<<mpp<<"        "<<qp<<"     "<<tpp<<endl;
 cout<<"  4.    "<<"Physics "<<"       "<<smarks<<"             "<<phy<<"           "<<mpph<<"        "<<qph<<"     "<<tpph<<endl;
 cout<<"  5.    "<<"serat   "<<"       "<<smarks<<"             "<<sert<<"           "<<mps<<"        "<<qs<<"     "<<tps<<endl;
 cout<<"  6.    "<<"I.C.T   "<<"       "<<smarks<<"             "<<ict<<"           "<<mpi<<"        "<<qi<<"     "<<tpi<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"     Grand Total:      "<<"600     "<<"  Grand Obtained:                     "<<total<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"     Percentage:                                                     "<<percentage<<"%"<<endl;
 cout<<"          GRADE:                                                       "<<grade<<endl;
 return 0;



}