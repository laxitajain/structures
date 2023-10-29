#include <iostream>
using namespace std;
int main()
{ int n=0,i;
  char *p,arr[20];
  p=arr;
  cout<<"Enter the string: ";
  cin>>arr;
  i=0;
  while(arr[i]!='\0')
  { n++;
    i++;
  }
  cout<<"The string in the reverse order is: ";
  for(i=n-1;i>=0;i--)
  { cout<<p[i];
  }
  return 0;
}
