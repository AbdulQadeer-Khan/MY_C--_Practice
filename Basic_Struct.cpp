#include <iostream>
#include <string>
using namespace std;

struct Item{
    string name;
    int cost;
    double weight;
};

int main(){
    Item sword={"Sword",150,8.5};
    Item potion={"Potion",50,0.5};

    cout<<"Name "<<"  Weight "<<"  Cost "<<endl;
    cout<<sword.name<<"   "<<sword.weight<<"     "<<sword.cost<<endl;
    cout<<potion.name<<"  "<<potion.weight<<"     "<<potion.cost<<endl;

    return 0;



}