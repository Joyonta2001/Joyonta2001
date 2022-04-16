#include <bits/stdc++.h>
using namespace std;

int main() 
{   

    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        { 
             if(s[i]=='0' && s[i+1]=='0')
             {
                count+=2;
                
             }

             else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
             {
                count++;
             }
         }

        cout<<count<<endl;
    }


    return 0;
}