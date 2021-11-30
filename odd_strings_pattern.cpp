//Print the word with odd letters as
//P         M
// R      A
//   O  R
//     G
//  O    R
// R       A
//P          M 
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"enter: ";
    cin>>str;
    int n = str.length();

    int m = n/2 ; // for finding the middle number

    if(n%2 != 0)        // if odd strings then only proceed 
    {
        for(int i=0; i<n; i++)
        {
            if(i != m && i != n-1 && i < m)
            {
                for(int j=0; j<i; j++)
                {
                    cout<<" ";
                }
                cout<<str[i];

                for(int x=i; x<n-(i+1); x++)
                {
                    cout<<" ";
                }
                cout<<str[(n-i)-1]<<endl;  
            }
            else if(i == m)
            {
                for(int j=0; j<i; j++)
                {
                    cout<<" ";
                }
                cout<<str[i]<<"\n";
            }
            else if(i > m)
            {
                for(int j=i; j<n-1; j++)
                {
                    cout<<" ";
                }
                cout<<str[n-(i+1)];

                for(int x=i; x>n-(i+1); x--)
                {
                    cout<<" ";
                }
                cout<<str[i]<<endl;   
            }
        }
    }
    else{
        cout<<"Patterns can be generated only to odd no.of string length!!";
    }
    return 0;       //finished
}