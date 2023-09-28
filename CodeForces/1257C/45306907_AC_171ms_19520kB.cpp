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
 int t;
    cin>>t;

    while(t--)
    {
        map<int ,vector<int >>mp;
            int siz;
        cin>> siz;
            for (int i = 0; i < siz; ++i) {
                int x;
                cin>> x;
                mp[x].push_back(i);
            }
            int ans=10000009;
            for (auto it:mp ) {
                for (int i = 1; i <it.second.size() ; ++i) {
                    ans=min(ans,it.second[i]-it.second[i-1]+1);
                }
            }
            if (ans==10000009)
            {
                cout<<-1<<"\n";
            }
            else
            {
                cout<<ans<<"\n";
            }

        }




}