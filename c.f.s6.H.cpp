#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,GCD,LCM;
    cin>>a>>b;

    GCD = __gcd(a,b);
    LCM = a/GCD*b;

    cout<<GCD<<" "<<LCM<<endl;

	return 0;
}