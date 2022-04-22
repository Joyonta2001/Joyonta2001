#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n,x;
     cin>>n;
     //int arr[n];
     vector<int>a;
     for(int i=0; i<=n; i++)
     
        a.push_back(0);
     

     for(int i=1; i<=n; i++)
     {
        cin>>x;
        a[x]++;
     }
      
      int f=1;
     for(int i=1; i<=n; i++)
     {
       if(a[i]>=3)
       {
          cout<<i<<" ";
          f = 0;
          break;
       }
     }

     if(f)
       cout<<"-1";
     cout<<endl;
  }
  
	return 0;
}