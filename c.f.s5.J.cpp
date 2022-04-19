#include<bits/stdc++.h>
using namespace std;

double sum(int n)
{
   double sum=0;
  for(int i=0; i<n; i++)
     {
        double a;
        cin>>a;

        sum+=a;
     }
     return sum;
}

int main()
{

  int n;
  cin>>n;
     
    cout<<fixed<<setprecision(7);
    cout<<sum(n)/n<<endl; 
   
	return 0;
}