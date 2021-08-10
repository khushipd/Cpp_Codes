#include <iostream>
using namespace std;
int main()
{
	int num1,num2,i,j;
	cout<<"Enter two numbers(intervals):";
	cin>>num1>>num2;
	cout<<"Prime numbers between "<<num1<<" and "<<num2<<" are: ";
	for(i=num1;i<=num2;i++)
	{
		int counter=0;
		for(j=i;j>=1;j--)
		{
			if(i%j==0)
			{
				counter+=1;
			}
		}
		if(counter==2)
		{
			cout<<i<<" ";
		}
	}
    return 0;
}
