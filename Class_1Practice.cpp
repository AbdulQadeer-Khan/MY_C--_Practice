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
    rectangle data(5.0,3.0);
    
    cout<<"Area Of Rectangle is :"<<data.getArea()<<endl;
    cout<<"perimeter of Rectangle is :"<<data.getperimeter()<<endl;
}