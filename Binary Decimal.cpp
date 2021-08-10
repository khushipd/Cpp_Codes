#include <iostream>
using namespace std;
void DecimalToBinary(int n)
{
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
      cout << binaryNumber[j];
   cout<<endl;
}
void BinaryToDecimal(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp!=0) {
      int lastDigit = temp % 10;
      decimalNumber += lastDigit*base;
      temp = temp/10;
      base = base*2;
   }
   cout<<"Decimal form of "<<n<<" is "<<decimalNumber<<endl;
}
int main()
{ 
   int num1;
   cout<<"Enter a decimal number: ";
   cin>>num1;
   DecimalToBinary(num1); 
   int num2;
   cout<<"Enter a binary number: ";
   cin>>num2;
   BinaryToDecimal(num2);
   return 0;
}
