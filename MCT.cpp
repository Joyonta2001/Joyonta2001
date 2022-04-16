#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,x;
    cin>>t;
    for(int i=0; i<t; i++)
    {
    long long int n;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }

    int f=0;
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		if(i!=j)
    		{
    			x = arr[i]+arr[j];
    			if(x>f)
    				f = x;
    		}
    	}
    }

    cout<<f<<endl;
}
    
	return 0;
}