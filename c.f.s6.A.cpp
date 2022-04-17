#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    
    double a = log2(n)/log2(2);
    //cout<<a;
    
    if(a==int(a))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

	return 0;
}