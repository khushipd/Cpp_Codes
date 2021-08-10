#include<iostream>
using namespace std;
char substring(char str[],int a,int b)
{
   cout<<"The Substring of the String is:";
   for(int j=a;j<=b;j++)
   {
     cout<<str[j];
   }
 
  
}
int main()
{ 
  char str[100]={0};
  int i,j;
  cout<<"Enter a String:";
  cin.getline(str,100);
  cout<<"Enter the starting and ending index for substring:";
  cin>>i>>j;
  
  substring(str,i,j);
  return 0;
}
