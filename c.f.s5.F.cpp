#include<bits/stdc++.h>
using namespace std;

long long equ(int n, int x)
{
   long long sum=0;
    for(int i=2; i<=x; i+=2)
    {
       sum+=pow(n,i);
    }

    return sum;
}

int main()
{

  int n,x;
  cin>>n>>x;
  equ(n,x);
  cout<<equ(n,x)<<endl;

   
	return 0;
}