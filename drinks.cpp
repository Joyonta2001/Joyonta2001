#include<bits/stdc++.h>
using namespace std;

int main()
{
   double n;
   double sum=0;
   cin>>n;
   int x[100];
   for(int i=0; i<n; i++)
   {
      cin>>x[i];

      sum = sum + x[i];
   }

   cout<<fixed<<setprecision(12);
   cout<<sum/n<<endl;


	return 0;
}