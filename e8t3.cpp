#include <iostream>
using namespace std;
struct computer{
char Cpu_type[25];
int HardDiskSize;
}S1[50];

int main()
{int i;
 for(i=0;i<3;i++){
 cout<<"Enter the CPU type and Hard Disk Size of Computer "<<(i+1)<<":";
 cin>>S1[i].Cpu_type;
 cin>>S1[i].HardDiskSize;
 }
 cout<<"The Details of the Computers having hard disk size above 8 GB are: "<<endl;

 for(i=0;i<3;i++){
 if(S1[i].HardDiskSize>8)
 {cout<<"CPU TYPE: "<<S1[i].Cpu_type<<" ";
  cout<<"HARD DISK SIZE: "<<S1[i].HardDiskSize<<" ";}
  cout<<endl;
 }
 return 0;
}
