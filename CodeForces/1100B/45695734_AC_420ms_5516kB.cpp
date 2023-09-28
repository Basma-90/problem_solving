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
    
	int n, m;
	scanf("%d%d", &n, &m);
	vector<ll>vec(n);
	unordered_set<ll>st;
	map<int,int>mp;
	int cnt=0;
	for(int i=0;i<m;i++)
	{
	    int x;
	    cin>>x;
	     mp[x]++;
	    if(mp[x]==1)
	    {
	        cnt++;
	    }
	    if(cnt==n){
	        cout<<1;
	    for(int y=1;y<=n;y++)
	    {
	         mp[y]--;
	        if(mp[y]==0)
	        {
	            cnt--;
	        }
	    }
	    }
	    else
	    {
	        cout<<0;
	    }
	}
	  cout<<"\n";

}


