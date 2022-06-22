#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    int a[t],b[t];

    for(int i=0; i<t; i++)
    {
    	cin>>a[i];
    	cin>>b[i];
    }

    for(int i=0; i<t; i++)
    {
    	for(int j=0; j<t; j++)
    	{
    		if(a[i]==b[j])
    		{
    			count++;
    		}
    	}
    }

    cout<<count<<endl;


	return 0;
}