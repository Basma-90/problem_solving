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
const ll sz=2*1e5+9;
ll arr[sz];
int main() {
    ll n,q;
    cin>>n>>q;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=1;i<n;i++)
    {
        arr[i]+=arr[i-1];
    }
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        if (x==1)
        {
            cout<<arr[y-1]<<"\n";
        }
        else
        {
            cout<<arr[y-1]-arr[x-2]<<"\n";
        }
    }

}
