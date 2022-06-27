#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    double x1,x2,x3,y1,y2,y3,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

    if(a+b==c||a+c==b||b+c==a)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        a=(y2-y1)/(x2-x1);
        b=(y3-y2)/(x3-x1);
        c=(y3-y1)/(x3-x1);
        if(a==c&&a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

	return 0;
}