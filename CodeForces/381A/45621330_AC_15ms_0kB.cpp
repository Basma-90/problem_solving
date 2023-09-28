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
int main() {
   ll n;
   cin>>n;
   ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int first=0;
    int last=n-1;
    int turn=0;
    ll serjia=0;
    ll dema=0;
    while(first<=last)
    {
        int chcard;
        if (arr[first]>arr[last])
        {
            chcard=arr[first];
            first++;
        }
        else
        {
            chcard=arr[last];
            last--;
        }
        if (turn==0)
        {
           serjia+=chcard;
        }
        else
        {
            dema+=chcard;
        }
        turn=1-turn;

    }
    cout<<serjia<<" "<<dema;
}
