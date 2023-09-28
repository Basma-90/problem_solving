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
    cin >> t;
    map<ll,ll>a;
    map<ll,ll>b;
    while (t--)
    {
     ll n,m;
     cin>>n>>m;
     for(int i=0;i<n;i++)
     {
      ll x;
      cin>>x;
      a[i]=x;
     }
     for(int i=0;i<m;i++)
     {
        ll y;
        cin>>y;
       b[i]=y;
     }
     ll cnt=0;
     for(int i=0;i<n;i++)
     {
         for(int y=0;y<m;y++)
         {
             if(a[i]==b[y])
             {
                 cnt++;
             }
         }
     }
      cout<<cnt<<"\n";


    }
}