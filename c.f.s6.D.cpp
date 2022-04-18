#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int a,b,q;
   cin>>a>>b>>q;
   
   int res = q % 3;
   if(res==1)
      cout<<a<<endl;
   else if(res==2)
      cout<<b<<endl;
   else
      cout<<(a^b)<<endl;


	return 0;
}