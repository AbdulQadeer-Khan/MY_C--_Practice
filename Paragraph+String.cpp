#include <iostream>
#include <string>
using namespace std;
int main()
{
    int words=0,spaces=0,sentences=0,pl;
    string paragraph,oldword,newword,position;
    cout<<"Write a paragraph ";
    getline(cin,paragraph);
    paragraph.find (' ');
    paragraph.find('.');
    pl=paragraph.length();
    for(int i=0; i<pl;i++)
    {
        if(paragraph[i]==' '){spaces++;}
    
    }
    for(int j=0;j<pl;j++){
        if(paragraph[j]=='.'){sentences++;}
    }
    
     cout<<paragraph<<endl;
     words=spaces+1;
     cout<<"Number of words:"<<words<<endl;
     cout<<"Number of letters:"<<paragraph.length()-spaces-sentences<<endl;
     cout<<"Number of sentences:"<<sentences<<endl;
     cout<<"which word you want to replace? ";
     cin>>oldword;
     position=paragraph.find(oldword);
     cout<<"Enter replacing word: ";
     cin>>newword;
     paragraph.replace(paragraph.find(oldword),oldword.length(),newword);
     for(int i=0; i<pl;i++)
    {
        if(paragraph[i]==' '){spaces++;}
    
    }
    for(int j=0;j<pl;j++){
        if(paragraph[j]=='.'){sentences++;}
    }
    
     cout<<paragraph<<endl;
     words=spaces+1;
     cout<<"Number of words:"<<words<<endl;
     cout<<"Number of letters:"<<paragraph.length()-spaces-sentences<<endl;
     cout<<"Number of sentences:"<<sentences<<endl;
     
 return 0;
}