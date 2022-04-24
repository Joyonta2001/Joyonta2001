#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector <long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    while(k--)
    {
        long long x;
        cin>>x;
        int l=-1,r=n,mid;

        while(l+1<r)
          {
            mid = (l+r)/2;
            if(v[mid]<x)
                l = mid;
            else
               r = mid; 
          } 

          cout<<l+2<<" "<<endl; 
       
    }


	return 0;
}