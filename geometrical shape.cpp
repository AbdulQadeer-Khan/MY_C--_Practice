#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,c,s,t,T,p,nsp,sp;
    float r,a,cir,l,l1,l2,par,h,s1,cot;
    cout<<"What service do you want? \n";
    cout<<"1. Circle\n";
    cout<<"2. Square\n";
    cout<<"3. triangle\n";
    cout<<"4. Pentagon\n";
    cout<<"5. Hexagon\n";
    cout<<"6. Heptagon\n";
    cout<<"7. Octagon\n";
    cout<<"8. Nonagon\n";
    cout<<"9. Decagon\n";
    cout<<"10. Polygon\n";
    cout<<"Choose the respective number: ";
    cin>>n;

    if(n==1){
        cout<<"What do you want to find for a circle\n";
    cout<<"1. Area\n";
    cout<<"2. Circumference\n";
    cout<<"3. Radius\n";
    cout<<"Choose the respective number:";
    cin>>c;
    if (c==1){
    cout<<"Enter radius of the Circle: ";
    cin>>r;
    a=3.14159*r*r;
    cout<<"Area of Circle of Radius:"<<r<<" is "<<a;}
    else if(c==2){
    cout<<"Enter Radius of the Circle: ";
    cin>>r;
    cir=2*3.14159*r;
    cout<<"Circumference of Circle of Radius:"<<r<<" is "<<cir;}
    else if (c==3){
    cout<<"Enter Area of the Circle:";
    cin>>a;
    r=sqrt(a/3.14159);
    cout<<"Radius of Circle of Area "<<a<<" is "<<r;}
    else {cout<<"Not A Valid Number\n";}     }



    else if(n==2){ 
    cout<<"What do you want to find for a Square\n";
    cout<<"1. Area\n";
    cout<<"2. Parameter\n";
    cout<<"3. length of sides\n";
    cout<<"Choose the respective number:";
    cin>>s;
    if(s==1){cout<<"Enter length of one side:";
    cin>>l;
    a=l*l;
    cout<<"Area of Square of length"<<l<<" is "<<a;}
    else if(s==2){cout<<"Enter length of one side:";
    cin>>l;
    par=4*l;
    cout<<"Parameter of Square of length "<<l<<" is "<<par;}
    else if(s==3){cout<<"Enter Area of Square: ";
    cin>>a;
    l=sqrt(a);
    cout<<"Length of Square of Area "<<a<<" is "<<l;}  
    else {cout<<"Not A Valid Number\n";}     }



    else if(n==3){
    cout<<"What type of Triangle are you considering\n";
    cout<<"1. Equilateral\n";
    cout<<"2. Isosceles\n";
    cout<<"3. scalene\n";
    cout<<"4. Right angle\n";
    cout<<"Choose the respective number:";
    cin>>t;
    if(t==1){cout<<"What do you want to find for Equilateral Triangle:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Choose the respective number:";
    cin>>T;
    if(T==1){cout<<"Enter Length of one side:";
    cin>>l;
    a=sqrt(3)/4*(l*l);
    cout<<"Area of Equilateral Triangle of length "<<l<<" is "<<a;}
    else if(T==2){cout<<"Enter Length of one side:";
    cin>>l;
    par=3*l;
    cout<<"Perimeter of Equilateral Triangle of length "<<l<<" is "<<par;}
    else if(T==3){cout<<"Enter the length of one side: ";
    cin>>l;
    h=(sqrt(3)/2)*l;
    cout<<"Height of Equilateral triangle of length"<<l<<" is "<<h;}
    else {cout<<"Not A Valid Number\n";} }
    else if(t==2){cout<<"What do you want to find for Isosceles Triangle:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Choose the respective number:";
    cin>>T;
    if(T==1){cout<<"Enter lengths of different sides:";
    cin>>l;
    cin>>l1;
    a=(l1/4)*sqrt(4*l*l-l1*l1);
    cout<<"Area of Isoceles Triangle of Sides "<<l<<" and "<<l1<<" is "<<a;}
    else if(T==2){cout<<"Enter lengths of different sides:";
    cin>>l;
    cin>>l1;
    par=2*l+l1;
    cout<<"Perimeter of Isosceles Triangle of Sides "<<l<<" and "<<l1<<" is "<<par;}
    else if(T==3){cout<<"Enter lengths of different sides:";
    cin>>l;
    cin>>l1;
    h=sqrt(l*l-(l1*l1/4));
    cout<<"Height of Isoceles Triangle of sides "<<l<<" and "<<l1<<" is "<<h;}
    else {cout<<"Not A Valid Number\n";}}
    else if(t==3){cout<<"What do you want to find for Scalene Triangle:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Choose the respective number:";
    cin>>T;
    if(T==1){cout<<"Enter lengths of three different sides:";
    cin>>l;
    cin>>l1;
    cin>>l2;
    s1=(l+l1+l2)/2;
    a=sqrt(s1*(s1-l)*(s1-l1)*(s1-l2));
    cout<<"Area of Scalene Triangle of Sides "<<l<<","<<l1<<" and "<<l2<<" is "<<a;}
    else if(T==2){cout<<"Enter lengths of three different sides:";
    cin>>l;
    cin>>l1;
    cin>>l2;
    par=l+l1+l2;
    cout<<"Perimeter of Scalene Triangle of sides "<<l<<","<<l1<<" and "<<l2<<" is "<<par;}
    else if(T==3){cout<<"Enter lengths of three different sides:";
    cin>>l;
    cin>>l1;
    cin>>l2;
    h=(2*l)/l1;
    cout<<"Height of Scalene Triangle of sides "<<l<<","<<l1<<" and "<<l2<<" is "<<h;}
    else {cout<<"Not A Valid Number\n";}}
    else if(t==4){cout<<"What do you want to find for Right angle Triangle:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Choose the respective number:";
    cin>>T;
    if(T==1){cout<<"Enter lengths of different sides:";
    cin>>l;
    cin>>l1;
    a=(l*l1)/2;
    cout<<"Area of Right Angle Triangle of sides "<<l<<" and "<<l1<<" is "<<a;}
    else if(T==2){cout<<"Enter lengths of three different sides:";
    cin>>l;
    cin>>l1;
    cin>>l2;
    par=l+l1+l2;
    cout<<"Perimeter of Right Angle Triangle of sides "<<l<<","<<l1<<" and "<<l2<<" is "<<par;}
    else if(T==3){cout<<"Enter lengths of three different sides:";
    cin>>l;
    cin>>l1;
    cin>>l2;
    h=(l*l1)/l2;
    cout<<"Height of Right angle Triangle Of sides "<<l<<","<<l1<<" and "<<l2<<" is "<<h;}
    else {cout<<"Not A Valid Number\n";}}
    else {cout<<"Not A Valid Number\n";} }



    else if(n==4){
    cout<<"What do you want to find for Pentagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Pentagon";
    cin>>l;
    a=1.72048*(l*l);
    cout<<"Area of Pentagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Pentagon";
    cin>>l;
    par=5*l;
    cout<<"Perimeter of Pentagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Pentagon";
    cin>>l;
    h=0.6882*l;
    cout<<"Height of Pentagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}    }



    else if(n==5){ cout<<"What do you want to find for Hexagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Hexagon";
    cin>>l;
    a=2.598*(l*l);
    cout<<"Area of Hexagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Hexagon";
    cin>>l;
    par=6*l;
    cout<<"Perimeter of Hexagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Hexagon";
    cin>>l;
    h=0.866*l;
    cout<<"Height of Hexagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}}



    else if(n==6){ cout<<"What do you want to find for Heptagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Heptagon";
    cin>>l;
    a=3.634*(l*l);
    cout<<"Area of Heptagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Heptagon";
    cin>>l;
    par=7*l;
    cout<<"Perimeter of Heptagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Heptagon";
    cin>>l;
    h=1.152*l;
    cout<<"Height of Heptagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}}


    else if(n==7){ cout<<"What do you want to find for Octagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Octagon";
    cin>>l;
    a=4.828*(l*l);
    cout<<"Area of Octagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Octagon";
    cin>>l;
    par=8*l;
    cout<<"Perimeter of Octagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Octagon";
    cin>>l;
    h=1.207*l;
    cout<<"Height of Octagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}}


    else if(n==8){ cout<<"What do you want to find for Nonagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Nonagon";
    cin>>l;
    a=6.182*(l*l);
    cout<<"Area of Nonagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Nonagon";
    cin>>l;
    par=9*l;
    cout<<"Perimeter of Nonagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Nonagon";
    cin>>l;
    h=1.401*l;
    cout<<"Height of Nonagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}}


    else if(n==9){ cout<<"What do you want to find for Decagon:\n";
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Enter the respective number:";
    cin>>p;
    if(p==1){
    cout<<"Enter length of one side of Decagon";
    cin>>l;
    a=7.694*(l*l);
    cout<<"Area of Decagon of side "<<l<<" is "<<a;}
    else if(p==2){
    cout<<"Enter length of one side of Decagon";
    cin>>l;
    par=10*l;
    cout<<"Perimeter of Decagon of side "<<l<<" is "<<par;}
    else if(p==3){
    cout<<"Enter length of one side of Decagon";
    cin>>l;
    h=1.538*l;
    cout<<"Height of Decagon of side "<<l<<" is "<<h;}
    else {cout<<"Not a Valid Number";}}

    else if(n==10){cout<<"What polygon are you considering\n";
    cout<<"Enter number of sides of Polygon:";
    cin>>nsp;
    cout<<"1. Area\n";
    cout<<"2. Perimeter\n";
    cout<<"3. Height\n";
    cout<<"Choose respective number";
    cin>>p;
    cot=1/(tan(3.14159/nsp));
    if(p==1){
    cout<<"Enter Length of one side:";
    cin>>sp;
    a=((nsp*(sp*sp))/4)*cot;
    cout<<"Area of Polygon of number of sides "<<nsp<<" of length "<<sp<<" is "<<a;}
    else if(p==2){
    cout<<"Enter Length of one side:";
    cin>>sp;
    par=nsp*sp;
    cout<<"Perimeter of Polygon of number of sides "<<nsp<<" of length "<<sp<<" is "<<par;}
    else if(p==3){
    cout<<"Enter Length of one side:";
    cin>>sp;
    h=sp/(2*tan(3.14159/nsp));
    cout<<"Height of polygon of number of sides "<<nsp<<" of length "<<sp<<" is "<<h;}
    else{cout<<"Not a Valid Number";}  }

    else {cout<<"Not A Valid Number\n";}
    return 0;
}