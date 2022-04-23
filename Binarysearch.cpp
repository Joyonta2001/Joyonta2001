#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    while(k--)
    {
        long long x;
        cin>>x;
        int l=-1,r=n,mid;
        bool item=0;

        while(l+1<r)
        {
           mid = (l+r)/2;
           if(a[mid]>=x)
             r = mid;
           else
            l = mid;
        }

        if(a[r]==x)
            item=1;
        if(item)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    

	return 0;
}