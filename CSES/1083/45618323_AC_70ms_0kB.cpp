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
    ll n;
    cin>>n;
    ll sm=0;

    for (int i = 0; i < n-1; ++i) {
        ll x;
        cin>>x;
        sm+=x;

    }
    ll res=(n*(n+1))/2;
    ll ans=res-sm;
    cout<<ans<<"\n";
}
