//2. Write a program to sort the elements in odd positions 
//   in descending order and elements in ascending order
//Eg 1: Input: 13,2 4,15,12,10,5
//        Output: 13,2,12,10,5,15,4
//Eg 2: Input: 1,2,3,4,5,6,7,8,9
//        Output: 9,2,7,4,5,6,3,8,1 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int temp;

    cout<<"enter: ";
    cin>>str;
    
    vector<int> s;

    stringstream ss(str);

    for (int i; ss >> i;) 
    {
        s.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }

    int n = s.size();
    
    for(int i=0; i<n; i=i+2)
    {
        for(int j=i+2; j<n; j=j+2)
        {
            if(s[i]<s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i=1; i<n; i=i+2)
    {
        for(int j=i+2; j<n; j=j+2)
        {
            if(s[i]>s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    for (size_t i = 0; i < n; i++){
        if(i == n-1){
            cout << s[i];
        }
        else{
            cout << s[i]<< ",";
        }
    }
    return 0;
}               //finished