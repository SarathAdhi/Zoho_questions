//Eg 1: Input: a1b10
//Output: abbbbbbbbbb
//Eg: 2: Input: b3c6d15
//Output: bbbccccccddddddddddddddd
//The number varies from 1 to 99.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[20];
    cout<<"enter :";
    cin>>s;   
    for (int i=0; i<strlen(s); i++)
    {
        int n=0, n1=0, n2=0, f=0;
        if(isdigit(s[i]) && isdigit(s[i+1]))
        {
            n1 = (s[i]-48)*10;
            n2 = (s[i+1]-48);
            f = n1 + n2;
            for(int j=0; j<f; j++)
                cout<<s[i-1];
        }
        else if(isdigit(s[i]) && !isdigit(s[i+1]) && s[i+1]!='\0')       //for single digit number
        {
            n = s[i]-48;
            for(int j=0; j<n; j++)
                cout<<s[i-1];
        }
        
    }
    return 0;
} //finished
