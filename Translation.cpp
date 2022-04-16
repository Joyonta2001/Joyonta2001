#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s,t,s1;
   cin>>s>>t;

   reverse(s.begin(),s.end());
   
   
    if(s==t)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
  
  return 0;
}