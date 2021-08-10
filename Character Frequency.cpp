#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Initializing variables.
    char str[100];
    int i;
    int freq[256] = {0};
    
    //Accepting inputs.
    cout<<"Enter the string: ";
    cin>>str;
     //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
     //Printing frequency of each character.
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
           cout<<char(i)<<":"<<freq[i]<<" ";
        }
    }
    
    return 0;
}
