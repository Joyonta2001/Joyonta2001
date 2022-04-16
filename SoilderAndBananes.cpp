#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,w,sum=0,x,y;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        sum+=i;
    }

    x = sum*k;
    y = x-n;

    if(y<0)
        cout<<"0"<<endl;
    else
        cout<<y<<endl;


  return 0;
}