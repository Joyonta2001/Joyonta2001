#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
   
   for(int i=0; i<n; i++)
   {
      cout<<arr[i]<<" ";
   }
   
}

int main()
{

   int n;
   cin>>n;
   int arr1[10001];
   int arr2[10001];
   for(int i=0; i<n; i++)
   {
      cin>>arr1[i];
   }
   
   for(int i=0; i<n; i++)
   {
      cin>>arr2[i];
   }
   print(arr2,n);
   print(arr1,n);
   
	return 0;
}