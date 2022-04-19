#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{
   long long int count=0;
    for(int i=2; i<=sqrt(n); i++)
    {
      if(n%i==0)
      {
         count=1;
         break;
      }
    }

    if(count==0)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}

int main()
{
   long long int t;
   cin>>t;
   long long int n;
   for(int i=0; i<t; i++)
   {
      cin>>n;
      if(n==1)
      {
         cout<<"NO"<<endl;
         continue;
      }
      prime(n);
   }
   
   
	return 0;
}