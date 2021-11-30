/* C) Form a number system with only 3 and 4. Find the nth number of the number system.
Eg.) The numbers are: 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 3344, 3433, 3434, 3443, 3444 ….
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cout<<"enter: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int v=3, z=1;
        for(int j=0; j<=i; j++)
        {
            cout<<"3";
        }
        cout<<",";

        for(int x=0; x < count; x++)
        {
            for(int p=0;p<i;p++)
                cout<<"3";
            cout<<(v+z)<<",";
            z++;
        }

        for(int j=0; j<=i; j++)
        {
            cout<<"4";
        }
        cout<<",";
        
        

        count+=1;
    }
}