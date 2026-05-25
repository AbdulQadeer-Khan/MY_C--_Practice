#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <string>
using namespace std;
int main(){

    string f_player,s_player;
    int again;
    srand(time(0));
    cout<<"Enter First player name:";
    getline(cin,f_player);
    cout<<"Enter Second player name:";
    getline(cin,s_player);
    do{
    int i,fp,sp,sumf=0,sums=0;
    cout<<"Who will play first";
    i=rand()%2;
    cout<<i<<endl;
    if(i==0){cout<<"Player "<<f_player<<" (first player) played first:\n";i++;}
    else {cout<<"Player "<<s_player<<" (second player) played first:\n";i--;}
    for(int j=1;j<=10;j++){
        fp=rand()%10+1;
        cout<<j<<"."<<fp<<endl;
        sumf+=fp;
    }
    // cout<<i<<endl;
    if(i==1){cout<<"Then Second player"<<s_player<<" played\n";}
    else{cout<<"Then first player "<<f_player<<" played\n";}
    for(int k=1;k<=10;k++){
        sp=rand()%10+1;
        cout<<k<<". "<<sp<<endl;
        sums+=sp;
    }

    if(sums>sumf){cout<<s_player<<" second player won "<<sums<<" > "<<sumf<<endl;}
    else if(sumf==sums){cout<<"DRAW "<<sums<<" = "<<sumf<<endl;}
    else{cout<<f_player<<" first player won "<<sumf<<" > "<<sums<<endl;}
    cout<<"Do you want to play again?? (yes=1) and (no=any number)\n";
    cin>>again;} while(again==1);

    cout<<"Thank you for playing random numbers";


    
    



    return 0;
}