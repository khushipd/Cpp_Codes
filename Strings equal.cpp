#include<iostream>
using namespace std;
int compare(char a[],char b[]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!=b[i])
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
  int flag=compare(a,b);
  if(flag==0)
  {
    cout<<"Strings are not equal";
  }
  else
  { 
    cout<<"Strings are equal";
  }
}
