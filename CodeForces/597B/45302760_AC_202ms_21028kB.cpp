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
int main()
{
    IO
   ll t,l,r;
    cin>>t;
    vector<pair<ll,ll>>vec,req;
    while(t--)
    {

        cin>>l>>r;
       vec.emplace_back(l,r);
    }
    sort(vec.begin(),vec.end(), comparev);
    ll lst=-1;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i].first>lst)
        {
            lst=vec[i].second;
            req.emplace_back(vec[i]);
        }

    }
    cout<<req.size();
    cout<<"\n";
}