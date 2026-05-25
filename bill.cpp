#include <iostream>
using namespace std;
int main()
{
    string item;
    float price;
    int quantity;
    cout<<"Enter item name: ";
    cin>>item;
    cout<<"Enter quantity of the item: ";
    cin>>quantity;
    price=30*quantity;
    cout<<"\n-------BILL--------\n";
    cout<<"Item: "<<item<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Total price: "<<price<<endl;
    return 0;
}