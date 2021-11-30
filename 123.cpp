// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void encod(string s)
{     
    int m=0;
    for(int i=0; i<s.size();i++)
    {
        int c=0;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                c+=1;
            }

        }
        
        cout<<s[i]<<c+1<<endl;

        
    }

}   
   
 
int main() {
	
	int T;
    cout<<"enter:";
	cin>>T;
	while(T--)
	{
		string str;
        
		cin>>str;
		
		encod(str);
	}
	return 0;
}// } Driver Code Ends

