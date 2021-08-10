#include <iostream>
using namespace std;

int main()
{ 
  int flag;
  string str;
  cout<<"Enter a number=";
  cin>>str;
  int n=str.length();
  for(int i=0;i<n/2;i++)
  {
    if(str[i]==str[n-i-1])
    {
      flag++;
    }
    else
    {
      flag=0;
    }
  }
  if(flag==n/2)
  {
    cout<<"Palindrome";
  }
  else
  {
    cout<<"Not a Palindrome";
  }
       
  return 0;
}
