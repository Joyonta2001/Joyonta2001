#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,a,b;
        cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

           a = abs(arr[i-i+1]);
           b = abs(arr[i-i+2]);
        }

        cout<<a<<" "<<b<<endl;
    }


  return 0;
}