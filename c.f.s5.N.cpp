#include<bits/stdc++.h>
using namespace std;

int zero(int n)
{
   int count=0;
   for(int i=0; i<n; i++)
   {
      int a;
      cin>>a;
      if(a==0)
      {
         count++;
      }
      else
         cout<<a<<" ";
   }
   
    return count;
}

int main()
{
   int n;
   cin>>n;
   int x = zero(n);
   for(int i=0; i<x; i++)
   {
      cout<<0<<" ";
   }
   
	return 0;
}