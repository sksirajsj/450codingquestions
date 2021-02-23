#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   vector<int> v(26);
   for(int i=0;i<s.size();i++)
   {

      v[s[i]-'a']++;
        
   }
   for(int i=0;i<s.size();i++)
   {
        if(v[i]>1)
        {
            char c=(char)(i+'a');
            cout<<c<<" ";
        }
   }

}
