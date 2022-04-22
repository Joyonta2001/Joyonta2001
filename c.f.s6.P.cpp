#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,res=0;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        res+=log10(i);
    }

    cout<<"Number of digits of "<<n<<"! is "<<(int)res+1<<endl;


	return 0;
}