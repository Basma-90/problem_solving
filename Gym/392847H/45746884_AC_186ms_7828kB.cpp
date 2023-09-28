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
ll q;
cin>>n>>q;
vector<ll>vec(n+2),l(q),r(q),v(q);

for(int i=0;i<q;i++)
{
    
    cin>>l[i]>>r[i]>>v[i];
    vec[r[i]+1]-=v[i];
    vec[l[i]]+=v[i];
}

for(int i=1;i<=n;i++)
    {
        vec[i]+=vec[i-1];
    }
    for(int i=0;i<q;i++)
    {
        vec[r[i]+1]-=(r[i]-l[i]+1)*v[i];
    }
 for(int i=1;i<=n;i++)
    {
         vec[i]+=vec[i-1];
         cout<<vec[i]<<" ";
    }
}