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
    map<ll,ll>mp;
  ll n,mm;
  scanf("%lld %lld", &n, &mm);
   ll arr[n];
  for(int i=0;i<n;i++)
  {
      scanf("%lld", &arr[i]);
  }
  ll i=0;
  ll j=0;
  ll m=0;
  ll start_index = 0; 
  ll end_index = 0;
  while(j<n)
  {
      mp[arr[j]]++;
      while(mp.size()>mm)
      {
          mp[arr[i]]--;
          if(mp[arr[i]]==0)
          {
              mp.erase(arr[i]);
            
          }
          i++;
      }
     if (j - i + 1 > m) {
            m = j - i + 1;
            start_index = i+1; 
            end_index = j+1;  
        }
      j++;
  }
printf("%lld %lld\n", start_index , end_index ); 
     
}