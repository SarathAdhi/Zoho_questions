//Given two sorted arrays, merge them such that the elements are not repeated

//Eg 1: Input:
//        Array 1: 2,4,5,6,7,9,10,13
//        Array 2: 2,3,4,5,6,7,8,9,11,15
//       Output:
//       Merged array: 2,3,4,5,6,7,8,9,10,11,13,15 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr1, arr2, fin;
    int temp;

    cout<<"enter: ";
    cin>>arr1>>arr2;
    arr1.append(",");
    arr1.append(arr2);
    cout<<arr1;

    vector<int> s;

    stringstream ss(arr1);

    for (int i; ss >> i;) 
    {
        s.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            if(s[i]>s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] =temp;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(i<(s.size()-1))
            cout<<s[i]<<",";
        else
            cout<<s[i];
    }

    return 0;
}               //finished