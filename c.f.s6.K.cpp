#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    long long n,r,m1=1,m2=1,m3=1,ncr,npr;
        //m1=n!,m2=r!,m3=(n-r)!
    cin>>n>>r;
    for(int i=1; i<=n; i++)
    {
        m1*=i;
    }
    
    for(int i=1; i<=r; i++)
    {
        m2*=i;
    }

    for(int i=1; i<=(n-r); i++)
    {
        m3*=i;
    }

    ncr = m1/m3;
    npr = ncr/m2;

    cout<<npr<<" "<<ncr<<endl;

	return 0;
}