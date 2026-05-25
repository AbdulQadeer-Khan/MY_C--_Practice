#include <iostream>
using namespace std;
int main()
{
    int num,a,b,c,d,e,f;
    
    cout<<"Ener any six digit number: ";
    cin>>num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    e=num%10;
    f=num/10;
    
    if (a>b){
    a=a+b;
    b=a-b;
    a=a-b;

   if(b>c){
    b=b+c;
    c=b-c;
    b=b-c;} 
    
    if(c>d){
    c=c+d;
    d=c-d;
    c=c-d;}

    if(d>e){
    d=d+e;
    e=d-e;
    d=d-e;}

    if(e>f){
    e=e+f;
    f=e-f;
    e=e-f;}
}
    if(b>c){
    b=b+c;
    c=b-c;
    b=b-c;
    
    if(c>d){
    c=c+d;
    d=c-d;
    c=c-d;}

    if(d>e){
    d=d+e;
    e=d-e;
    d=d-e;}

     if(e>f){
    e=e+f;
    f=e-f;
    e=e-f;}
}

    if(c>d){
    c=c+d;
    d=c-d;
    c=c-d;

     if(d>e){
    d=d+e;
    e=d-e;
    d=d-e;}

    if(e>f){
    e=e+f;
    f=e-f;
    e=e-f;}
}

    if(d>e){
    d=d+e;
    e=d-e;
    d=d-e;

    if(e>f){
    e=e+f;
    f=e-f;
    e=e-f;}
}

    if(e>f){
    e=e+f;
    f=e-f;
    e=e-f;}
    
   /* else if(d>e){
    d=d+e;
    e=d-e;
    d=d-e;}
    else if(c>d){
    c=c+d;
    d=c-d;
    c=c-d;}
    else if(b>c){
    b=b+c;
    c=b-c;
    b=b-c;}
    else if (a>b){
    a=a+b;
    b=a-b;
    a=a-b;}*/
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
    
    return 0;
}