#include <iostream>
using namespace std;
class rectangle{
    private:
    double length;
    double width;

    public:
    rectangle(double l,double w){
        length=l;
        width=w;
    }

    double getArea(){
        return length * width;
    }
    double getperimeter(){
        return 2* (length + width);
    }

};
int main(){
    double userlength;
    double userwidth;
    cout<<"Enter length of the rectangle";
    cin>>userlength;
    cout<<"Enter width of the rectangle";
    cin>>userwidth;
    rectangle data(userlength,userwidth);
    
    cout<<"Area Of Rectangle is :"<<data.getArea()<<endl;
    cout<<"perimeter of Rectangle is :"<<data.getperimeter()<<endl;
}