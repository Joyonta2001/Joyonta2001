#include<bits/stdc++.h>
using namespace std;

int main()
{

   double p,x,a;
   cin>>p>>x;

  a = (100/(p-100))*x;

  cout<<fixed<<setprecision(2)<<abs(a);
   
	return 0;
}