#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
   string s="qwertyuiopasdfghjkl;zxcvbnm,./";
           map<char,int>mapp;
           for(int i=0;i<s.length();i++)
           {
               mapp[s[i]]=i;
           }
           char dir;
           cin>>dir;
           string t;
           cin>>t;
           if(dir=='R')
           {
               for (int i = 0; i < t.length(); i++)
               {
                   int idx=mapp[t[i]];
                t[i]=s[idx-1];
               }
           }
           else
           {
               for (int i = 0; i < t.length(); i++)
               {
                   int idx=mapp[t[i]];
                   t[i]=s[idx+1];
               }
           }
           cout<<t<<"\n";
    return 0;
}
