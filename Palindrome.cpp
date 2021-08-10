#include <iostream>
using namespace std;
int main()
{
	int n,num,digit,reverse=0;
	cout<<"Enter the number: ";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}while(num!=0);
	cout<<"The reverse of the number is: "<<reverse<<endl;
	if(n==reverse)
	{
		cout<<"The number is Palindrome.";
	}
	else
	{
		cout<<"The number is not Palindrome.";
	}
	return 0;
}
