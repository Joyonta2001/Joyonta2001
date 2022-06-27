#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    long double a,b,c,d,e;
    cin>>a>>b>>c>>d;

    e=((a-c)*(a-c)+(b-d)*(b-d));

    std::cout<<std::fixed<<std::setprecision(9)<<sqrt(e)<<endl;

	return 0;
}