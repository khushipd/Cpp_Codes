#include <iostream>
using namespace std;
void strconcat(char str1[],char str2[])
{  
  int i=0;
  int j=0;
  
  char str3[200];
  while (str1[i] != '\0') { 

        str3[j] = str1[i]; 

        i++; 

        j++; 

    } 
   
   i = 0; 

    while (str2[i] != '\0') { 

        str3[j] = str2[i]; 

        i++; 

        j++; 

    } 

    str3[j] = '\0'; 
  
  
  cout<<"String after concatenation: "<<str3;
 }
int main() {
   char str1[100] = {0};
   char str2[100] = {0};
   cout<<"Enter String 1:";
   cin.getline(str1,100);
   cout<<"Enter String 2:";
   cin.getline(str2,100);
   
   cout<<"String 1: "<<str1<<endl;
   cout<<"String 2: "<<str2<<endl;
   strconcat(str1,str2);
   
   return 0;
}
