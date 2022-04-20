#include<bits/stdc++.h>
using namespace std;

void distinct(int arr[],int n)
{
   sort(arr,arr+n);
  int count=0; 
  for(int i=0; i<n; i++)
  {
     if(arr[i]!=arr[i+1])
     {
        count++;
     }
  }

  cout<<count<<endl;
}

int main()
{

  int n;
  cin>>n;
  int arr[1000];
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
  
  distinct(arr,n);
   
   return 0;
}