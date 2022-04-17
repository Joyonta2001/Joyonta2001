#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,count=0;
    cin>>n;

    for(int i=2; i<=sqrt(n); i++)
    {
      if(n%i==0)
      {
         count=1;
         //cout<<i<<endl;
         break;
      }
    }

    if(n==1)
      cout<<"NO"<<endl;
    else if(count==0)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
	return 0;
}