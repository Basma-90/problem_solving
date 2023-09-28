#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            count++;
        }
    }
    vector<int>ans;
    for(int i=1;i<n;i++)
    {
        if(v[i]==1)
        {
            ans.push_back(v[i-1]);
        }
    }
    cout<<count<<"\n";
    if(ans.size()==0)
    {
       cout<<v[n-1]<<" ";
    }
    else
    {
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<v[n-1]<<" ";
    }

    return 0;
}
