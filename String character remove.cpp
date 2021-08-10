#include<iostream>
using namespace std;
char delchar(char str[],char b)
{
  cout<<"The Modified String is:";
  for(int i=0;str[i]!='\0'; i++)
    {
      if(str[i]==b)
         continue;
       cout<<str[i];
    }
}
int main()
{ 
  char str[100]={0};
  char a;
  cout<<"Enter a String:";
  cin.getline(str,100);
  cout<<"Enter the character you want to delete:";
  cin>>a;
  delchar(str,a);
  return 0;
}
