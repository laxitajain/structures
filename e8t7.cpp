#include <iostream>
using namespace std;
int main()
{ int n=0,i,a=0,e=0,I=0,o=0,u=0;
  char *p,arr[20];
  p=arr;
  cout<<"Enter the string: ";
  cin>>arr;
  i=0;
  while(arr[i]!='\0')
  { n++;
    i++;
  }
  for(i=0;i<n;i++)
  { if(toupper(*p)=='A')
       {a++;}
    if(toupper(*p)=='E')
       {e++;}
    if(toupper(*p)=='I')
       {I++;}
    if(toupper(*p)=='O')
       {o++;}
    if(toupper(*p)=='U')
       {u++;}
    p++;
  }
  cout<<"A-"<<a<<endl;
  cout<<"E-"<<e<<endl;
  cout<<"I-"<<I<<endl;
  cout<<"O-"<<o<<endl;
  cout<<"U-"<<u<<endl;
  return 0;
}
