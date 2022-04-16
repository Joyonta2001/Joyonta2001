#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,cnt=0;
    for(int i=0; i<t; i++)
    {
    	cin>>a>>b>>c;

    	if(a+b+c>=2)
    		{
              cnt++;
    		}
    }

      cout<<cnt<<endl;


	return 0;
}


