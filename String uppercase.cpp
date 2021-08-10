#include<iostream>
using namespace std;
char uppercase(char str[])
{
	cout<<"The String in uppercase is:";
     for(int i=0;str[i]!='\0'; i++)
    {
      if(str[i]>='a' && str[i]<='z')
      {
        str[i]=str[i]-32;
      }
     }    
       cout<<str;
    
}
int main()
{ 
  char str[100]={0};
  cout<<"Enter a String:";
  cin.getline(str,100);
  uppercase(str);
  return 0;
}
