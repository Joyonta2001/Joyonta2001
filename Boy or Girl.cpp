#include <bits/stdc++.h>
using namespace std;

int main()
{
   char s[100];
   cin>>s;

   for(int i=0; s[i]!='\0'; i++)
   {
      if(s[i]%2==0)
         cout<<"CHAT WITH HER"<<endl;
      else
         cout<<"IGNORE HIM!"<<endl;
   }
  

    return 0;
}
