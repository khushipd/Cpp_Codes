#include<iostream>
using namespace std;
char copystring(char str1[],char str2[])
{
   cout<<"The Copystring of the String is:";
   for(int i=0;str1[i]!='\0';i++)
   {
    
     str2[i]=str1[i];
     
   }
   
   cout<<str2;
   

}
int main()
{ 
  char str1[100]={0};
  char str2[100]={0};
  cout<<"Enter a String:";
  cin.getline(str1,100);
  
  
  copystring(str1,str2);
  return 0;
}
