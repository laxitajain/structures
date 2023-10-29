#include <iostream>
using namespace std;
struct student{
char name[25];
int Rollno;
char address[50];
char branch[20];
float percentage;
}S1;

int main()
{cout<<"Enter the name, roll no., address, branch and percentage: ";
 cin>>S1.name;
 cin>>S1.Rollno;
 cin>>S1.address;
 cin>>S1.branch;
 cin>>S1.percentage;

 cout<<"The Name is "<<S1.name<<"."<<endl;
 cout<<"The Roll No. is "<<S1.Rollno<<"."<<endl;
 cout<<"The Address is "<<S1.address<<"."<<endl;
 cout<<"The Branch is "<<S1.branch<<"."<<endl;
 cout<<"The Percentage is "<<S1.percentage<<"."<<endl;
 return 0;
}
