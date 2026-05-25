#include <iostream>
using namespace std;
int main()
{
  bool ab= true;
  bool b=false;
  int p;
  int cp=p;
  int yp=p;
  cout << "create your password: ";
  cin>> p;
  cout<< "confirm your password";
  cin>>cp;
  cout<<"what is your passsword";
  cin>>yp;
 p=cp=yp=ab;
 cout<<ab; 
  b>p>cp>yp;
  cout<<b;
  return 0;
}