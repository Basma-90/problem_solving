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

int main () {
 fast();
 ll t;
 cin>>t;
 map<string,ll>mapp;
 while(t--)
 {
     string s;
     cin>>s;
     if(mapp[s]>0)
     {
         int x=mapp[s];
         cout<<s<<x<<"\n";
     }
     else
     {
         cout<<"OK"<<"\n";
     }
     mapp[s]++;
 }

}