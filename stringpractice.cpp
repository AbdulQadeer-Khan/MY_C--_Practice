#include <iostream>
#include <string>
using namespace std;
int main()
{
    int pl,spaces=0,words=0,sentences=0,vowels=0;
    string paragraph;
    cout<<"Write a paragraph";
    getline(cin,paragraph);
    pl=paragraph.length();
    paragraph.find(' ');
    for(int i=0;i<pl;i++){
        if(paragraph[i]==' '){spaces++;}
        if(paragraph[i]=='.'){sentences++;}
        if(paragraph[i]=='a'||paragraph[i]=='e'||paragraph[i]=='i'||paragraph[i]=='o'||paragraph[i]=='u'){vowels++;}
        paragraph[i]=tolower(paragraph[i]);
    }

    cout<<"Your paragraph:"<<paragraph<<endl;
    cout<<"Number of letters:"<<pl-spaces-sentences<<endl;
    cout<<"number of sentences:"<<sentences<<endl;
    cout<<"Number of vowels:"<<vowels<<endl;
    cout<<"number of consunants:"<<pl-vowels-sentences-spaces<<endl;
    return 0;
}