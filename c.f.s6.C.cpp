#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,sum=0,sum1=0,sum2=0,maxi,mini;
    cin>>a>>b;
    maxi = max(a,b);
    mini = min(a,b);
    
   for(i=mini; i<=maxi; i++)
    {
       sum = sum+i;

       if(i%2==0)
       {
        sum1 = sum1+i;
       }

       else if(i%2!=0)
       {
        sum2 = sum2+i;
       }
    }

    
    cout<<sum<<endl;
    cout<<sum1<<endl;
    cout<<sum2<<endl;

	return 0;
}