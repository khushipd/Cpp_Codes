#include<iostream>
using namespace std;
int size(char str[])
{
  int i = 0; 

    while (str[i]!='\0') 
    {

        i++; 
        
    }

    return i;

}
int main()
{ 
  char str[100]={0};
  cout<<"Enter a String:";
  cin.getline(str,100);
  
  cout<<"The length of the String is:"<<size(str)<<endl;
  return 0;
}
