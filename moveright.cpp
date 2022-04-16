#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n1,n2,rem,lcm,a;
   cin>>n1>>n2;

   a = __gcd(n1,n2);
   cout<<a<<endl;

   lcm = n1/a*n2;
   cout<<lcm<<endl;

   /*while(1)
   {

   rem = n1%n2;
   if(rem==0)
      break;
   
   n1 = n2;
   n2 = rem;

   } 

     cout<<n2<<endl;

   
	*/return 0;
}