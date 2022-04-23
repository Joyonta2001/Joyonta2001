#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <long long> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    long long q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        auto i1 = lower_bound(v.begin(),v.end(),l);
        auto i2 = upper_bound(v.begin(),v.end(),r);

        cout<<distance(i1,i2)<<" ";
    }

    
    return 0;
}