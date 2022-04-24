#include<bits/stdc++.h>
using namespace std;

bool prime[100000001];
vector <int> v;
void fun(long long n)
{
  
  memset(prime,true,sizeof(prime));

  v.push_back(2);

  for(int p=3; p*p<=n; p+=2)
  {
    if(prime[p]==true)
    {
        for(int i=p*p; i<=n; i+=p)
        {
            prime[i]=false;
        }
    }
  }

  for(int i=3; i<=n; i+=2)  
  {
     if(prime[i])
     {
        v.push_back(i);
     }
  }
}

int main()
{
   fun(100000001);
   long long t;
   cin>>t;
   while(t--)
   {
      long long n;
      cin>>n;

      cout<<v[n-1]<<endl;
   }

   return 0;
}