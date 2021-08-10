#include <iostream>
using namespace std;
int main()
{
	int number,reversedNumber=0,remainder;
	cout<<" Enter the number: ";
	cin>>number;
	while(number!=0)
	{
		remainder=number%10;
		reversedNumber=reversedNumber*10+remainder;
		number=number/10; 
	}
	cout<<"Reversed Number= "<<reversedNumber;
	return 0;
}
