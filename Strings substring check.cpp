#include<iostream>
using namespace std;
int subset(char a[],char b[],int m,int n)
{
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    
    {
      for(j=0;j<m;j++)
      {
        if(b[i]==a[j])
          break;
      }
      if(j==m)
         return 0;
      
     }
    return 1;
}
int main()
{
  char a[100]={0};
  char b[100]={0};
  cout<<"Enter 1st String:";
  cin.getline(a,100);
  cout<<"Enter 2nd String:";
  cin.getline(b,100);
  int m = sizeof(a)/sizeof(a[0]); 

  int n = sizeof(b)/sizeof(b[0]);
 
  int flag=subset(a,b,m,n);

  if(flag==0)
  {
    cout<<"String 2 is not substring of String 1";
  }
  else
  { 
    cout<<"String 2 is the substring of String 1";
  }
}
