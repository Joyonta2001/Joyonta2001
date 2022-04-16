#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count1=0,count2=0,f=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            count1++;
            count2=0;
        }
        else
        {
            count2++;
            count1=0;
        }

        if(count1==7 || count2==7)
        {
            f=1;
        }

    }

    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


  return 0;
    
}