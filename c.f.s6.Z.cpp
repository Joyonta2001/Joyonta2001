#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    long long r,s,C,S;
    cin>>r>>s;
    
    S = sqrt(2*s*s);
    C = 2*r;

    if(C>=S)
    {
        cout<<"Circle"<<endl;
    }
    else if(C<=s)
    {
        cout<<"Square"<<endl;
    }

    else
        cout<<"Complex"<<endl;


	return 0;
}