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
   string  s;
    cin>>s;

    int l=0,r=0;
    ll siz=s.size();
    for (int i = 0; i <siz ; i++) {
        if (s[i]=='(')
        {
            l++;
            r++;
        }
        else if (s[i]==')')
            if (r > 0)
            {
                l++;
                r--;
            }
    }
    l-=r;
    cout<<l<<"\n";
}