#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
       long long x,y,d1;
       double a,b,d,d2;
       cin>>x>>y;

        a = x;
        b = y;

       d2 = sqrt( ((0-a)*(0-a)) + ((0-b)*(0-b)) );

        d1 = d2;
        d = d2 - d1;

       if(x==0 && y==0)
        cout<<"0"<<endl;
       else if(d==0)
        cout<<"1"<<endl;
       else
        cout<<"2"<<endl;
        
    }

  return 0;
}