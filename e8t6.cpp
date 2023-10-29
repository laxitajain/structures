#include <iostream>
using namespace std;

int main()
{ int n=0,i;
  char *p,a[20],b[20];
  p=b;
  cout<<"Enter string 1: ";
  cin>>a;
  cout<<"Enter string 2: ";
  cin>>b;
  i=0;
  while(b[i]!='\0')
  { n++;
    i++;
  }
  for(i=0;i<n;i++)
  { a[i]=*p++;
  }
  a[i]='\0';
  cout<<"The copied string is: "<<a;
  return 0;
}
