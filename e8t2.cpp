#include <iostream>
using namespace std;
struct cricket{
char Player_name[25];
char Country_name[20];
int No_of_Matches;
int BattingAvg;
}S1[10];

int main()
{int i;
 for(i=0;i<10;i++){
 cout<<"Enter the Name, Country, No. of Matches Played and the Batting Average of Player "<<(i+1)<<":";
 cin>>S1[i].Player_name;
 cin>>S1[i].Country_name;
 cin>>S1[i].No_of_Matches;
 cin>>S1[i].BattingAvg;}
 cout<<"The Players with Batting Average above 50 are: "<<endl;
 for(i=0;i<10;i++){
 if(S1[i].BattingAvg>50)
 {cout<<S1[i].Player_name<<" ";}
 }
 return 0;
}
