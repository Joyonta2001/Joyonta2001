#include<bits/stdc++.h>
using namespace std;

void time(int n, char c)
{
   for(int i=0; i<n; i++)
   {
      cout<<c<<" ";
   }
   cout<<endl;
}

int main()
{

   int t;
   cin>>t;
   while(t--)
   {
      int n;
      char c;
      cin>>n>>c;
      time(n,c);

   }
   
	return 0;
}