#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int n,x,y,a;
   for(int i=0; i<t; i++)
   {
      cin>>n;

      x = n%7; //23%7=2
      y = 7-x; //7-2=5
      a = n+y;
      if(n%7==0)
         cout<<n<<endl;
      else if(n%7!=0)
         cout<<a<<endl;

   }

   return 0;
}