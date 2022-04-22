#include<bits/stdc++.h>
using namespace std;

int main()
{
    
  int n;
  cin>> n;
  int c=0;
  for(int i=2;i<=n;i++)
  {
    if(n % i == 0)
    {
        c++;
      int count=0;
      while(n % i == 0)
      {
        n/=i;
        count++;
      }
      if (c==1)
      {
          cout <<"("<< i << "^" <<count<<")" ; 
      }
      else
      {
         cout <<"*" <<"("<< i << "^" <<count<<")" ; 
      }
      
      
    }


  }


    /*long long n;
    cin>>n;
    int f=0;
    for(int i=2; i<=n/2; i++)
    {
        int count=0;
        while(n%i==0)
        {
            count++;
            n/=i;
        }

        if(count>0 && f>0)
        {
            cout<<"*";
        }

        if(count>0)
        {
            cout<<"("<<i<<"^"<<count<<")";
            f = 1;
        }

        if(n==1)
        {
            break;
        }
    }

        if(n>1 && f)
        {
            cout<<"*";
        }

        if(n>1)
        {
            cout<<"("<<n<<"^"<<1<<")";  
        }
    

	*/return 0;
}