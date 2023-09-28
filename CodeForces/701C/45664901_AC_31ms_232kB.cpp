#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> st;
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }
    int l=0;
    int r=0;
    int mx=INT32_MAX;
    ll sm=0;
    map<char,int>mp;
    while(1){
    while(sm<st.size()&&l<n)
    {   
        if(mp[s[l++]]++==0)
        {
            sm++;
        }
    }
    if(st.size()>sm)
    {
        break;
    }
     mx=min(mx,l-r);
    if(--mp[s[r++]]==0)
        {
            sm--;
        }
      
    }
   cout<<mx; 
   
}