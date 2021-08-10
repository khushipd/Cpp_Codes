#include <iostream>
using namespace std;
void reverse(char *str) {
   if(*str == '\0')
   return;
   else {
      reverse(str+1);
      cout<<*str;
   }
}
int main() 
{
   char str[] = "CODING IS PASSION";
   cout<<"Original String: "<<str<<endl;
   cout<<"Reversed String: ";
   reverse(str);
   return 0;
}
