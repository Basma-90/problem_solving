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
	vector<vector<bool> > arr(n, vector<bool>(m)), l(n, vector<bool>(m)), r(n, vector<bool>(m)),
		d(n, vector<bool>(m)), u(n, vector<bool>(m));
		
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			scanf("%d", &x);
			arr[i][j] = x;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0) l[i][j] = arr[i][j];
			else l[i][j] = (l[i][j - 1] | arr[i][j]);
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--) {
			if (j == m - 1) r[i][j] = arr[i][j];
			else r[i][j] = (r[i][j + 1] | arr[i][j]);
		}
	}


	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (i == 0) u[i][j] = arr[i][j];
			else u[i][j] = (u[i - 1][j] | arr[i][j]);
		}
	}
	
	
	for (int j = 0; j < m; j++) {
		for (int i = n - 1; i >= 0; i--) {
			if (i == n - 1) d[i][j] = arr[i][j];
			else d[i][j] = (d[i + 1][j] | arr[i][j]);
		}
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!arr[i][j]) {
				if (l[i][j]) res++;
				if (r[i][j]) res++;
				if (u[i][j]) res++;
				if (d[i][j]) res++;
			}
		}
	}

	cout << res<<"\n";

	return 0;
}


