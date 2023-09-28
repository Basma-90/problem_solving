#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0) ;
#define ll long long
using namespace std;
int c[3];
int ans[1000];
bool comparev(pair<ll,ll>&a,pair<ll,ll>&b)
{
    return (b.second>a.second||(a.second==b.second&&b.first>a.first));
}
int arr[1009][1009];
int bb[1009];
int main()
{
    IO
    int n,m;
    cin>>n>>m;
    int a,b;
    for (int i = 0; i <n ; ++i) {
        cin>>a>>b;
        arr[a][b]++;
        bb[b]++;
    }
    int l=0,r=0;
    int x,y;
    for (int i = 0; i <m; ++i) {

        cin>>x>>y;
        if (bb[y])
        {
            l++;
            bb[y]--;
        }
        if (arr[x][y])
        {
            r++;
            arr[x][y]--;
        }
    }
    cout<<l<<" "<<r<<"\n";






}