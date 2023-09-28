#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
#define ll long long
typedef tree<
        pair<ll , ll>,
        null_type,
        less<pair<ll,ll> >,
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
const int N = 3e5 + 4 ,  MOD = 1e9 + 7;
int main() {
   string s;
   cin>>s;
   map<char,ll>mp;
   for(int i=0;i<s.size();i++)
   {
       mp[s[i]]++;
   }
   ll cnt=0;
   for(auto it:mp)
   {
       if(it.second%2!=0)
       {
           cnt++;
       }
   }
   
   if(cnt%2!=0||cnt==0)
   {
       cout<<"First"<<"\n";
   }
   else
   {
       cout<<"Second"<<"\n";
   }
}