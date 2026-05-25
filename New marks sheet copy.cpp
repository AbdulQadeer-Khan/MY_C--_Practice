#include <iostream>
using namespace std;
int main()
{
    string name;
 int roll,smarks;
 double eng,math,prog,phy,sert,ict,qe,qm,qp,qph,qs,qi,mpe,mpm,mpp,mpph,mps,mpi;
 double total, percentage,tpe,tpm,tpp,tpph,tps,tpi;
 smarks=100;
 cout<<"Enter your name: ";
 cin>>name;
 cout<<"Enter your roll number: ";
 cin>>roll;


 cout<<"Enter marks obtained in English final: ";       // ENGLISH SUBJECT
 cin>>eng;
 if(eng>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>eng;}
 cout<<"Enter marks obtained in English mid: ";
 cin>>mpe;
 if(mpe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpe;}
 cout<<"Enter marks in English quiz: ";
 cin>>qe;
 if(qe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qe;}


 cout<<"Enter marks obtained in Math final: ";       //MATH SUBJECT
 cin>>math;
 if(math>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>math;}
 cout<<"Enter marks in Math mid: ";
 cin>>mpm;
 if(mpm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpm;}
 cout<<"Enter marks in Math quiz: ";
 cin>>qm;
 if(qm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qm;}


 cout<<"Enter marks obtained in Programming final: ";     //PROGRAMMING SUBJECT
 cin>>prog;
 if(prog>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>prog;}
 cout<<"Enter marks obtained in Programming mid: ";
 cin>>mpp;
 if(mpp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpp;}
 cout<<"Enter marks in Programming quiz: ";
 cin>>qp;
 if(qp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qp;}


 cout<<"Enter marks obtained in Physics final: ";      //PHYSICS SUBJECT
 cin>>phy;
 if(phy>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>phy;}
 cout<<"Enter the marks obtained in Physics mid: ";
 cin>>mpph;
 if(mpph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpph;}
 cout<<"Enter marks in physics quiz: ";
 cin>>qph;
 if(qph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qph;}


 cout<<"Enter marks obtained in Seerat-e-Nabi final: ";     //SEERAT-E-NABI SUBJECT
 cin>>sert;
 if(sert>60){cout<<"Marks cannot exceed 60\n!";
    cout<<"Enter Marks Again!";cin>>sert;}
 cout<<"Enter the marks obtained in Seerat-e-Nabi mid: ";
 cin>>mps;
 if(mps>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mps;}
 cout<<"Enter marks obtained in Seerat-e-Nabi quiz: ";
 cin>>qs;
 if(qs>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qs;}


 cout<<"Enter marks obtained in I.C.T final: ";        //I.C.T SUBJECT
 cin>>ict;
 if(ict>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>ict;}
 cout<<"Enter the marks obtained in I.C.T mid: ";
 cin>>mpi;
 if(mpi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpi;}
 cout<<"Enter marks obtained in I.C.T quiz: ";
 cin>>qi;
 if(qi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qi;}

 tpe=eng+qe+mpe;       //ENGLISH TOTAL MARKS
 tpm=math+qm+mpm;      //MATH TOTAL MARKS
 tpp=prog+qp+mpp;      //PROGRAMMING TOTAL MARKS
 tpph=phy+qph+mpph;    //PHYSICS TOTAL MARKS
 tps=sert+qs+mps;      //SEERAT-E-NABI TOTAL MARKS
 tpi=ict+qi+mpi;       //I.C.T TOTAL MARKS
 
 if(tpe>100){cout<<"English marks exceeded 100!\n";
    cout<<"English final marks:";cin>>eng;
    cout<<"English quiz marks:";cin>>qe;
    cout<<"English mid marks:";cin>>mpe;}
 
 if(tpm>100){cout<<"Math marks exceeded 100!\n";   
    cout<<"Math final marks:";cin>>math;
    cout<<"Math quiz marks:";cin>>qm;
    cout<<"Math mid marks:";cin>>mpm;}
 
 if(tpp>100){cout<<"Programming marks exceeded 100!\n";
    cout<<"Programming final marks:";cin>>prog;
    cout<<"Programming quiz marks:";cin>>qp;
    cout<<"Programming mid marks:";cin>>mpp;}
 
 if(tpph>100){cout<<"Physics marks exceeded 100!\n";
    cout<<"Physics final marks:";cin>>phy;
    cout<<"Physics quiz marks:";cin>>qph;
    cout<<"Physics mid marks:";cin>>mpph;}
 
 if(tps>100){cout<<"Seerat-e-Nabi marks exceeded 100!\n";
    cout<<"Seerat-e-Nabi final marks:";;cin>>sert;
    cout<<"Seerat-e-Nabi quiz marks:";cin>>qs;
    cout<<"Seerat-e-Nabi mid marks:";cin>>mps;}
 
 if(tpi>100){cout<<"I.C.T marks exceeded 100!";
    cout<<"I.C.T final marks:";cin>>ict;
    cout<<"I.C.T quiz marks:";cin>>qi;
    cout<<"I.C.T mid marks:";cin>>mpi;}


   tpe=eng+qe+mpe;
   tpm=math+qm+mpm;
   tpp=prog+qp+mpp;
   tpph=phy+qph+mpph;
   tps=sert+qs+mps;
   tpi=ict+qi+mpi;

 total=eng+math+prog+phy+sert+ict+qe+qm+qp+qph+qs+qi+mpe+mpm+mpp+mpph+mps+mpi;
 percentage=(total/600)*100;

 if(total>600){total=300;}
 if(percentage>100){percentage=50;}
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
 return 0;



 }