#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0; i<s.size()-1; i+=2)
    {
    	for(int j=0; j<s.size()-i-1; j+=2)
    	{
    		if(s[j]>s[j+2])
    		{
                char temp = s[j];
                     s[j] = s[j+2];
                   s[j+2] = temp;
                   //swap(s[j],s[j+2]);   
    		}
    	}
    }

      cout<<s<<endl;

	return 0;
}