#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    long long n;
    cin>>n;
    int a[31][31];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0 || i==j)
               a[i][j]=1;
            else
               a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

	return 0;
}