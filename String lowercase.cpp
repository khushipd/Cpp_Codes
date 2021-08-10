#include<iostream>
using namespace std;
char lowercase(char str[])
{
	cout<<"The String in lowercase is:";
     for(int i=0;str[i]!='\0'; i++)
    {
      if(str[i]>='A' && str[i]<='Z')
      {
        str[i]=str[i]+32;
      }
     }    
       cout<<str;
    
}
int main()
{ 
  char str[100]={0};
  cout<<"Enter a String:";
  cin.getline(str,100);
  lowercase(str);
  return 0;
}
