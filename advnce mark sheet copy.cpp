#include <iostream>
using namespace std;
int main()
{
    string name,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
 int roll,smarks,ns;
 double eng,math,prog,phy,sert,ict,a,b,qe,qm,qp,qph,qs,qi,qa,qb,mpe,mpm,mpp,mpph,mps,mpi,mpa,mpb;
 //double c,d,qc,qd,mpc,mpd,tpi,tpj;
 double total, percentage,tpa,tpb,tpc,tpd,tpe,tpf,tpg,tph;
 cout<<"In how many subjects you want to create DMC";
 cin>>ns;
 if (ns==6){
 cout<<"Enter first subject: ";
 cin>>s1;
 cout<<"Enter second subject: ";
 cin>>s2;
 cout<<"Enter third subject: ";
 cin>>s3;
 cout<<"Enter fourth subject: ";
 cin>>s4;
 cout<<"Enter fifth subject: ";
 cin>>s5;
 cout<<"Enter sixth subject: ";
 cin>>s6;}

if(ns==7){
 cout<<"Enter first subject: ";
 cin>>s1;
 cout<<"Enter second subject: ";
 cin>>s2;
 cout<<"Enter third subject: ";
 cin>>s3;
 cout<<"Enter fourth subject: ";
 cin>>s4;
 cout<<"Enter fifth subject: ";
 cin>>s5;
 cout<<"Enter sixth subject: ";
 cin>>s6;
 cout<<"Enter seventh subject: ";
 cin>>s7;}

if(ns==8){
 cout<<"Enter first subject: ";
 cin>>s1;
 cout<<"Enter second subject: ";
 cin>>s2;
 cout<<"Enter third subject: ";
 cin>>s3;
 cout<<"Enter fourth subject: ";
 cin>>s4;
 cout<<"Enter fifth subject: ";
 cin>>s5;
 cout<<"Enter sixth subject: ";
 cin>>s6;
 cout<<"Enter seventh subject: ";
 cin>>s7;
 cout<<"Enter eight subject: ";
 cin>>s8;}

/*if(ns==9){
 cout<<"Enter first subject: ";
 cin>>s1;
 cout<<"Enter second subject: ";
 cin>>s2;
 cout<<"Enter third subject: ";
 cin>>s3;
 cout<<"Enter fourth subject: ";
 cin>>s4;
 cout<<"Enter fifth subject: ";
 cin>>s5;
 cout<<"Enter sixth subject: ";
 cin>>s6;
 cout<<"Enter seventh subject: ";
 cin>>s7;
 cout<<"Enter eight subject: ";
 cin>>s8;
 cout<<"Enter ninth subject: ";
 cin>>s9;}

if(ns==10){
 cout<<"Enter first subject: ";
 cin>>s1;
 cout<<"Enter second subject: ";
 cin>>s2;
 cout<<"Enter third subject: ";
 cin>>s3;
 cout<<"Enter fourth subject: ";
 cin>>s4;
 cout<<"Enter fifth subject: ";
 cin>>s5;
 cout<<"Enter sixth subject: ";
 cin>>s6;
 cout<<"Enter seventh subject: ";
 cin>>s7;
 cout<<"Enter eight subject: ";
 cin>>s8;
 cout<<"Enter ninth subject: ";
 cin>>s9;
 cout<<"Enter tenth subject: ";
 cin>>s10;}*/


 cout<<"Enter total Marks of each Subject:";
 cin>>smarks;
 cout<<"Enter student name: ";
 cin>>name;
 cout<<"Enter student roll number: ";
 cin>>roll;

if(ns==6){
 cout<<"Enter marks obtained in "<<s1<<" final: ";       // ENGLISH SUBJECT
 cin>>eng;
 if(eng>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>eng;}
 cout<<"Enter marks obtained in "<<s1<<" mid: ";
 cin>>mpe;
 if(mpe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpe;}
 cout<<"Enter marks in "<<s1<<" quiz: ";
 cin>>qe;
 if(qe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qe;}


 cout<<"Enter marks obtained in "<<s2<<" final: ";       //MATH SUBJECT
 cin>>math;
 if(math>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>math;}
 cout<<"Enter marks in "<<s2<<" mid: ";
 cin>>mpm;
 if(mpm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpm;}
 cout<<"Enter marks in "<<s2<<" quiz: ";
 cin>>qm;
 if(qm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qm;}


 cout<<"Enter marks obtained in "<<s3<<" final: ";     //PROGRAMMING SUBJECT
 cin>>prog;
 if(prog>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>prog;}
 cout<<"Enter marks obtained in "<<s3<<" mid: ";
 cin>>mpp;
 if(mpp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpp;}
 cout<<"Enter marks in "<<s3<<" quiz: ";
 cin>>qp;
 if(qp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qp;}


 cout<<"Enter marks obtained in "<<s4<<" final: ";      //PHYSICS SUBJECT
 cin>>phy;
 if(phy>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>phy;}
 cout<<"Enter the marks obtained in "<<s4<<" mid: ";
 cin>>mpph;
 if(mpph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpph;}
 cout<<"Enter marks in "<<s4<<" quiz: ";
 cin>>qph;
 if(qph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qph;}


 cout<<"Enter marks obtained in "<<s5<<" final: ";     //SEERAT-E-NABI SUBJECT
 cin>>sert;
 if(sert>60){cout<<"Marks cannot exceed 60\n!";
    cout<<"Enter Marks Again!";cin>>sert;}
 cout<<"Enter the marks obtained in "<<s5<<" mid: ";
 cin>>mps;
 if(mps>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mps;}
 cout<<"Enter marks obtained in "<<s5<<" quiz: ";
 cin>>qs;
 if(qs>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qs;}


 cout<<"Enter marks obtained in "<<s6<<" final: ";        //I.C.T SUBJECT
 cin>>ict;
 if(ict>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>ict;}
 cout<<"Enter the marks obtained in "<<s6<<" mid: ";
 cin>>mpi;
 if(mpi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpi;}
 cout<<"Enter marks obtained in "<<s6<<" quiz: ";
 cin>>qi;
 if(qi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qi;}

 tpa=eng+qe+mpe;       //ENGLISH TOTAL MARKS
 tpb=math+qm+mpm;      //MATH TOTAL MARKS
 tpc=prog+qp+mpp;      //PROGRAMMING TOTAL MARKS
 tpd=phy+qph+mpph;    //PHYSICS TOTAL MARKS
 tpe=sert+qs+mps;      //SEERAT-E-NABI TOTAL MARKS
 tpf=ict+qi+mpi;       //I.C.T TOTAL MARKS
 
 if(tpa>smarks){cout<<s1<<" marks exceeded "<<smarks<<"!\n";
    cout<<s1<<" final marks:";cin>>eng;
    cout<<s1<<" quiz marks:";cin>>qe;
    cout<<s1<<" mid marks:";cin>>mpe;}
 
 if(tpb>smarks){cout<<s2<<" marks exceeded "<<smarks<<"!\n";   
    cout<<s2<<" final marks:";cin>>math;
    cout<<s2<<" quiz marks:";cin>>qm;
    cout<<s2<<" mid marks:";cin>>mpm;}
 
 if(tpc>smarks){cout<<s3<<" marks exceeded "<<smarks<<"!\n";
    cout<<s3<<" final marks:";cin>>prog;
    cout<<s3<<" quiz marks:";cin>>qp;
    cout<<s3<<" mid marks:";cin>>mpp;}
 
 if(tpd>smarks){cout<<s4<<" marks exceeded "<<smarks<<"!\n";
    cout<<s4<<" final marks:";cin>>phy;
    cout<<s4<<" quiz marks:";cin>>qph;
    cout<<s4<<" mid marks:";cin>>mpph;}
 
 if(tpe>smarks){cout<<s5<<" marks exceeded "<<smarks<<"!\n" ;
    cout<<s5<<" final marks:";;cin>>sert;
    cout<<s5<<" quiz marks:";cin>>qs;
    cout<<s5<<" mid marks:";cin>>mps;}
 
 if(tpf>smarks){cout<<s6<<" marks exceeded "<<smarks<<"!\n";
    cout<<s6<<" final marks:";cin>>ict;
    cout<<s6<<" quiz marks:";cin>>qi;
    cout<<s6<<" mid marks:";cin>>mpi;}


   tpa=eng+qe+mpe;
   tpb=math+qm+mpm;
   tpc=prog+qp+mpp;
   tpd=phy+qph+mpph;
   tpe=sert+qs+mps;
   tpf=ict+qi+mpi;
total=eng+math+prog+phy+sert+ict+qe+qm+qp+qph+qs+qi+mpe+mpm+mpp+mpph+mps+mpi;
 percentage=(total/(smarks*6))*100;
if(total>smarks*6){total=smarks/2;}
if(percentage>100){percentage=50;}}

   //  7SUBJECTS
   if(ns==7){
 cout<<"Enter marks obtained in "<<s1<<" final: ";       // ENGLISH SUBJECT
 cin>>eng;
 if(eng>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>eng;}
 cout<<"Enter marks obtained in "<<s1<<" mid: ";
 cin>>mpe;
 if(mpe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpe;}
 cout<<"Enter marks in "<<s1<<" quiz: ";
 cin>>qe;
 if(qe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qe;}


 cout<<"Enter marks obtained in "<<s2<<" final: ";       //MATH SUBJECT
 cin>>math;
 if(math>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>math;}
 cout<<"Enter marks in "<<s2<<" mid: ";
 cin>>mpm;
 if(mpm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpm;}
 cout<<"Enter marks in "<<s2<<" quiz: ";
 cin>>qm;
 if(qm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qm;}


 cout<<"Enter marks obtained in "<<s3<<" final: ";     //PROGRAMMING SUBJECT
 cin>>prog;
 if(prog>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>prog;}
 cout<<"Enter marks obtained in "<<s3<<" mid: ";
 cin>>mpp;
 if(mpp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpp;}
 cout<<"Enter marks in "<<s3<<" quiz: ";
 cin>>qp;
 if(qp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qp;}


 cout<<"Enter marks obtained in "<<s4<<" final: ";      //PHYSICS SUBJECT
 cin>>phy;
 if(phy>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>phy;}
 cout<<"Enter the marks obtained in "<<s4<<" mid: ";
 cin>>mpph;
 if(mpph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpph;}
 cout<<"Enter marks in "<<s4<<" quiz: ";
 cin>>qph;
 if(qph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qph;}


 cout<<"Enter marks obtained in "<<s5<<" final: ";     //SEERAT-E-NABI SUBJECT
 cin>>sert;
 if(sert>60){cout<<"Marks cannot exceed 60\n!";
    cout<<"Enter Marks Again!";cin>>sert;}
 cout<<"Enter the marks obtained in "<<s5<<" mid: ";
 cin>>mps;
 if(mps>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mps;}
 cout<<"Enter marks obtained in "<<s5<<" quiz: ";
 cin>>qs;
 if(qs>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qs;}


 cout<<"Enter marks obtained in "<<s6<<" final: ";        //I.C.T SUBJECT
 cin>>ict;
 if(ict>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>ict;}
 cout<<"Enter the marks obtained in "<<s6<<" mid: ";
 cin>>mpi;
 if(mpi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpi;}
 cout<<"Enter marks obtained in "<<s6<<" quiz: ";
 cin>>qi;
 if(qi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qi;}

    cout<<"Enter marks obtained in "<<s7<<"final: ";
    cin>>a;
 if(a>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>a;}
 cout<<"Enter marks obtained in "<<s7<<"mid: ";
 cin>>mpa;
 if(mpa>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpa;}
 cout<<"Enter marks obtained in "<<s7<<"quiz: ";
 cin>>qa;
 if(qa>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qa;}


 tpa=eng+qe+mpe;       //ENGLISH TOTAL MARKS
 tpb=math+qm+mpm;      //MATH TOTAL MARKS
 tpc=prog+qp+mpp;      //PROGRAMMING TOTAL MARKS
 tpd=phy+qph+mpph;    //PHYSICS TOTAL MARKS
 tpe=sert+qs+mps;      //SEERAT-E-NABI TOTAL MARKS
 tpf=ict+qi+mpi;       //I.C.T TOTAL MARKS
 tpg=a+mpa+qa;        // 7 subject

 if(tpa>smarks){cout<<s1<<" marks exceeded "<<smarks<<"!\n";
    cout<<s1<<" final marks:";cin>>eng;
    cout<<s1<<" quiz marks:";cin>>qe;
    cout<<s1<<" mid marks:";cin>>mpe;}
 
 if(tpb>smarks){cout<<s2<<" marks exceeded "<<smarks<<"!\n";   
    cout<<s2<<" final marks:";cin>>math;
    cout<<s2<<" quiz marks:";cin>>qm;
    cout<<s2<<" mid marks:";cin>>mpm;}
 
 if(tpc>smarks){cout<<s3<<" marks exceeded "<<smarks<<"!\n";
    cout<<s3<<" final marks:";cin>>prog;
    cout<<s3<<" quiz marks:";cin>>qp;
    cout<<s3<<" mid marks:";cin>>mpp;}
 
 if(tpd>smarks){cout<<s4<<" marks exceeded "<<smarks<<"!\n";
    cout<<s4<<" final marks:";cin>>phy;
    cout<<s4<<" quiz marks:";cin>>qph;
    cout<<s4<<" mid marks:";cin>>mpph;}
 
 if(tpe>smarks){cout<<s5<<" marks exceeded "<<smarks<<"!\n" ;
    cout<<s5<<" final marks:";;cin>>sert;
    cout<<s5<<" quiz marks:";cin>>qs;
    cout<<s5<<" mid marks:";cin>>mps;}
 
 if(tpf>smarks){cout<<s6<<" marks exceeded "<<smarks<<"!\n";
    cout<<s6<<" final marks:";cin>>ict;
    cout<<s6<<" quiz marks:";cin>>qi;
    cout<<s6<<" mid marks:";cin>>mpi;}

  if(tpg>smarks){cout<<s7<<" marks exceeded "<<smarks<<"!\n";
    cout<<s7<<" final marks:";cin>>a;
    cout<<s7<<" quiz marks:";cin>>qa;
    cout<<s7<<" mid marks:";cin>>mpa;}

   tpa=eng+qe+mpe;
   tpb=math+qm+mpm;
   tpc=prog+qp+mpp;
   tpd=phy+qph+mpph;
   tpe=sert+qs+mps;
   tpf=ict+qi+mpi;
   tpg=a+mpa+qa;
 total=eng+math+prog+phy+sert+ict+a+qe+qm+qp+qph+qs+qi+qa+mpe+mpm+mpp+mpph+mps+mpi+mpa;
 percentage=(total/(smarks*7))*100;
if(total>smarks*7){total=smarks/2;}
if(percentage>100){percentage=50;}}
      
 //  8 SUBJECTS
 if (ns==8){
 cout<<"Enter marks obtained in "<<s1<<" final: ";       // ENGLISH SUBJECT
 cin>>eng;
 if(eng>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>eng;}
 cout<<"Enter marks obtained in "<<s1<<" mid: ";
 cin>>mpe;
 if(mpe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpe;}
 cout<<"Enter marks in "<<s1<<" quiz: ";
 cin>>qe;
 if(qe>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qe;}


 cout<<"Enter marks obtained in "<<s2<<" final: ";       //MATH SUBJECT
 cin>>math;
 if(math>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>math;}
 cout<<"Enter marks in "<<s2<<" mid: ";
 cin>>mpm;
 if(mpm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpm;}
 cout<<"Enter marks in "<<s2<<" quiz: ";
 cin>>qm;
 if(qm>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qm;}


 cout<<"Enter marks obtained in "<<s3<<" final: ";     //PROGRAMMING SUBJECT
 cin>>prog;
 if(prog>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>prog;}
 cout<<"Enter marks obtained in "<<s3<<" mid: ";
 cin>>mpp;
 if(mpp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpp;}
 cout<<"Enter marks in "<<s3<<" quiz: ";
 cin>>qp;
 if(qp>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qp;}


 cout<<"Enter marks obtained in "<<s4<<" final: ";      //PHYSICS SUBJECT
 cin>>phy;
 if(phy>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>phy;}
 cout<<"Enter the marks obtained in "<<s4<<" mid: ";
 cin>>mpph;
 if(mpph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpph;}
 cout<<"Enter marks in "<<s4<<" quiz: ";
 cin>>qph;
 if(qph>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qph;}


 cout<<"Enter marks obtained in "<<s5<<" final: ";     //SEERAT-E-NABI SUBJECT
 cin>>sert;
 if(sert>60){cout<<"Marks cannot exceed 60\n!";
    cout<<"Enter Marks Again!";cin>>sert;}
 cout<<"Enter the marks obtained in "<<s5<<" mid: ";
 cin>>mps;
 if(mps>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mps;}
 cout<<"Enter marks obtained in "<<s5<<" quiz: ";
 cin>>qs;
 if(qs>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qs;}


 cout<<"Enter marks obtained in "<<s6<<" final: ";        //I.C.T SUBJECT
 cin>>ict;
 if(ict>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>ict;}
 cout<<"Enter the marks obtained in "<<s6<<" mid: ";
 cin>>mpi;
 if(mpi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpi;}
 cout<<"Enter marks obtained in "<<s6<<" quiz: ";
 cin>>qi;
 if(qi>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qi;}

    cout<<"Enter marks obtained in "<<s7<<" final: ";   // 7th SUBJECT
    cin>>a;
 if(a>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>a;}
 cout<<"Enter marks obtained in "<<s7<<" mid: ";
 cin>>mpa;
 if(mpa>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpa;}
 cout<<"Enter marks obtained in "<<s7<<" quiz: ";
 cin>>qa;
 if(qa>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qa;}

    cout<<"Enter marks obtained in "<<s8<<" final: ";
    cin>>b;
 if(b>60){cout<<"Marks cannot exceed 60!\n";
    cout<<"Enter Marks Again!";cin>>b;}
 cout<<"Enter marks obtained in "<<s8<<" mid: ";
 cin>>mpb;
 if(mpb>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>mpb;}
 cout<<"Enter marks obtained in "<<s8<<" quiz: ";
 cin>>qb;
 if(qb>20){cout<<"Marks cannot exceed 20!\n";
    cout<<"Enter Marks Again!";cin>>qb;}


 tpa=eng+qe+mpe;       //ENGLISH TOTAL MARKS
 tpb=math+qm+mpm;      //MATH TOTAL MARKS
 tpc=prog+qp+mpp;      //PROGRAMMING TOTAL MARKS
 tpd=phy+qph+mpph;    //PHYSICS TOTAL MARKS
 tpe=sert+qs+mps;      //SEERAT-E-NABI TOTAL MARKS
 tpf=ict+qi+mpi;       //I.C.T TOTAL MARKS
 tpg=a+mpa+qa;        // 7th subject
 tph=b+mpb+qb;        // 8th subject

 if(tpa>smarks){cout<<s1<<" marks exceeded "<<smarks<<"!\n";
    cout<<s1<<" final marks:";cin>>eng;
    cout<<s1<<" quiz marks:";cin>>qe;
    cout<<s1<<" mid marks:";cin>>mpe;}
 
 if(tpb>smarks){cout<<s2<<" marks exceeded "<<smarks<<"!\n";   
    cout<<s2<<" final marks:";cin>>math;
    cout<<s2<<" quiz marks:";cin>>qm;
    cout<<s2<<" mid marks:";cin>>mpm;}
 
 if(tpc>smarks){cout<<s3<<" marks exceeded "<<smarks<<"!\n";
    cout<<s3<<" final marks:";cin>>prog;
    cout<<s3<<" quiz marks:";cin>>qp;
    cout<<s3<<" mid marks:";cin>>mpp;}
 
 if(tpd>smarks){cout<<s4<<" marks exceeded "<<smarks<<"!\n";
    cout<<s4<<" final marks:";cin>>phy;
    cout<<s4<<" quiz marks:";cin>>qph;
    cout<<s4<<" mid marks:";cin>>mpph;}
 
 if(tpe>smarks){cout<<s5<<" marks exceeded "<<smarks<<"!\n" ;
    cout<<s5<<" final marks:";;cin>>sert;
    cout<<s5<<" quiz marks:";cin>>qs;
    cout<<s5<<" mid marks:";cin>>mps;}
 
 if(tpf>smarks){cout<<s6<<" marks exceeded "<<smarks<<"!\n";
    cout<<s6<<" final marks:";cin>>ict;
    cout<<s6<<" quiz marks:";cin>>qi;
    cout<<s6<<" mid marks:";cin>>mpi;}

  if(tpg>smarks){cout<<s7<<" marks exceeded "<<smarks<<"!\n";
    cout<<s7<<" final marks:";cin>>a;
    cout<<s7<<" quiz marks:";cin>>qa;
    cout<<s7<<" mid marks:";cin>>mpa;}

    if(tph>smarks){cout<<s8<<" marks exceeded "<<smarks<<"!\n";
    cout<<s8<<" final marks:";cin>>b;
    cout<<s8<<" quiz marks:";cin>>qb;
    cout<<s8<<" mid marks:";cin>>mpb;}

   tpa=eng+qe+mpe;
   tpb=math+qm+mpm;
   tpc=prog+qp+mpp;
   tpd=phy+qph+mpph;
   tpe=sert+qs+mps;
   tpf=ict+qi+mpi;
   tpg=a+mpa+qa;
   tpf=b+mpb+qb;
 total=eng+math+prog+phy+sert+ict+a+b+qe+qm+qp+qph+qs+qi+qa+qb+mpe+mpm+mpp+mpph+mps+mpi+mpa+mpb;
 percentage=(total/(smarks*8))*100;
if(total>smarks*8){total=smarks/2;}
if(percentage>100){percentage=50;}}

 if(ns==6){
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"             D E T A I L E D  M A R K S  C E R T I F I C A T E"<<endl;
 cout<<"Name: "<<name<<endl;
 cout<<"Roll no.: "<<roll<<endl;
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"Sr.no.  "<<"Subject "<<"    "<<"Total Marks"<<"    "<<" M a r k s      o b t a i n e d "<<endl;
 cout<<"                                   "<<"Final Paper"<<"   "<<"Mid Paper"<<"   "<<"Quiz"<<"   "<<"Total"<<endl;
 cout<<"  1.    "<<s1<<"    "<<"         "<<smarks<<"             "<<eng<<"           "<<mpe<<"        "<<qe<<"     "<<tpa<<endl;
 cout<<"  2.    "<<s2<<"    "<<"        "<<smarks<<"             "<<math<<"           "<<mpm<<"        "<<qm<<"     "<<tpb<<endl;
 cout<<"  3.    "<<s3<<"    "<<"        "<<smarks<<"             "<<prog<<"           "<<mpp<<"        "<<qp<<"     "<<tpc<<endl;
 cout<<"  4.    "<<s4<<"    "<<"         "<<smarks<<"             "<<phy<<"           "<<mpph<<"        "<<qph<<"     "<<tpd<<endl;
 cout<<"  5.    "<<s5<<"    "<<"        "<<smarks<<"             "<<sert<<"           "<<mps<<"        "<<qs<<"     "<<tpe<<endl;
 cout<<"  6.    "<<s6<<"    "<<"         "<<smarks<<"             "<<ict<<"           "<<mpi<<"        "<<qi<<"     "<<tpf<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Grand Total:        "<<smarks*6<<"  Grand Obtained:                     "<<total<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Percentage:                                                     "<<percentage<<"%"<<endl;}

 if(ns==7){
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"             D E T A I L E D  M A R K S  C E R T I F I C A T E"<<endl;
 cout<<"Name: "<<name<<endl;
 cout<<"Roll no.: "<<roll<<endl;
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"Sr.no.  "<<"Subject "<<"    "<<"Total Marks"<<"    "<<" M a r k s      o b t a i n e d "<<endl;
 cout<<"                                   "<<"Final Paper"<<"   "<<"Mid Paper"<<"   "<<"Quiz"<<"   "<<"Total"<<endl;
 cout<<"  1.    "<<s1<<"    "<<"        "<<smarks<<"             "<<eng<<"           "<<mpe<<"        "<<qe<<"     "<<tpa<<endl;
 cout<<"  2.    "<<s2<<"    "<<"        "<<smarks<<"             "<<math<<"           "<<mpm<<"        "<<qm<<"     "<<tpb<<endl;
 cout<<"  3.    "<<s3<<"    "<<"        "<<smarks<<"             "<<prog<<"           "<<mpp<<"        "<<qp<<"     "<<tpc<<endl;
 cout<<"  4.    "<<s4<<"    "<<"        "<<smarks<<"             "<<phy<<"           "<<mpph<<"        "<<qph<<"     "<<tpd<<endl;
 cout<<"  5.    "<<s5<<"    "<<"        "<<smarks<<"             "<<sert<<"           "<<mps<<"        "<<qs<<"     "<<tpe<<endl;
 cout<<"  6.    "<<s6<<"    "<<"        "<<smarks<<"             "<<ict<<"           "<<mpi<<"        "<<qi<<"     "<<tpf<<endl;
 cout<<"  7.    "<<s7<<"    "<<"        "<<smarks<<"             "<<a<<"           "<<mpa<<"        "<<qa<<"     "<<tpg<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Grand Total:        "<<smarks*7<<"  Grand Obtained:                   "<<total<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Percentage:                                                     "<<percentage<<"%"<<endl;}

 if(ns==8){
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"             D E T A I L E D  M A R K S  C E R T I F I C A T E"<<endl;
 cout<<"Name: "<<name<<endl;
 cout<<"Roll no.: "<<roll<<endl;
 cout<<"_________________________________________________________________________"<<endl;
 cout<<"Sr.no.  "<<"Subject "<<"    "<<"Total Marks"<<"    "<<" M a r k s      o b t a i n e d "<<endl;
 cout<<"                                   "<<"Final Paper"<<"   "<<"Mid Paper"<<"   "<<"Quiz"<<"   "<<"Total"<<endl;
 cout<<"  1.    "<<s1<<"    "<<"        "<<smarks<<"             "<<eng<<"           "<<mpe<<"        "<<qe<<"     "<<tpa<<endl;
 cout<<"  2.    "<<s2<<"    "<<"        "<<smarks<<"             "<<math<<"           "<<mpm<<"        "<<qm<<"     "<<tpb<<endl;
 cout<<"  3.    "<<s3<<"    "<<"        "<<smarks<<"             "<<prog<<"           "<<mpp<<"        "<<qp<<"     "<<tpc<<endl;
 cout<<"  4.    "<<s4<<"    "<<"        "<<smarks<<"             "<<phy<<"           "<<mpph<<"        "<<qph<<"     "<<tpd<<endl;
 cout<<"  5.    "<<s5<<"    "<<"        "<<smarks<<"             "<<sert<<"           "<<mps<<"        "<<qs<<"     "<<tpe<<endl;
 cout<<"  6.    "<<s6<<"    "<<"        "<<smarks<<"             "<<ict<<"           "<<mpi<<"        "<<qi<<"     "<<tpf<<endl;
 cout<<"  7.    "<<s7<<"    "<<"        "<<smarks<<"             "<<a<<"           "<<mpa<<"        "<<qa<<"     "<<tpg<<endl;
 cout<<"  8.    "<<s8<<"    "<<"        "<<smarks<<"             "<<b<<"           "<<mpb<<"        "<<qb<<"     "<<tph<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Grand Total:        "<<smarks*8<<"  Grand Obtained:                   "<<total<<endl;
 cout<<"__________________________________________________________________________"<<endl;
 cout<<"        Percentage:                                                     "<<percentage<<"%"<<endl;}

 return 0;



 }