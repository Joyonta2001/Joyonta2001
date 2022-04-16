#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1=0, sum2=0, sum3=0;
    cin>>n;

    int arr[100][100];

    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<3; j++)
    	{
    		cin>>arr[i][j];
    	}

           sum1+=arr[i][0];
           sum2+=arr[i][1];
           sum3+=arr[i][2]; 
    }

    //cout<<sum1<<" "<<sum2<<" "<<sum3;

       if(sum1==0 && sum2==0 && sum3==0)
     	   cout<<"YES"<<endl;
       else
     	   cout<<"NO"<<endl;


	return 0;
}