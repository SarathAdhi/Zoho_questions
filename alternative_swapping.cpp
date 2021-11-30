//1) Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum.
//    Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}
//         Output : {7, 1, 6, 2, 5, 3, 4}

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    int temp;
    cout<<"enter: ";
    cin>>str;

    vector<int> s;

    stringstream ss(str);

    for(int i;ss >> i;)
    {
        s.push_back(i);
        if(ss.peek() == ',')
            ss.ignore();
    }
    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i]<s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] =temp;
            }
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(i<(s.size()-1))
            cout<<s[i]<<",";
        else
            cout<<s[i];
    }
    cout<<endl;
    int n = s.size();
    int m = n/2;
    for(int i=0; i<m; i++)
    {
        if(i == m-1)
        {
            cout<<s[i]<<","<<s[n-(i+1)];
        }
        else
        {
            cout<<s[i]<<","<<s[n-(i+1)]<<",";
        }
        
    }
    if(n%2 != 0)
        cout<<","<<s[m];
    return 0;
}                   //finished, got the output. but input without space is working
