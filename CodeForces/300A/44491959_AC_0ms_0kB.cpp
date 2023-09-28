#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main()
{
    int size;
    cin>>size;
    vector<int>v(size),pos,neg,zero;
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
        if(v[i]==0)
        {
            zero.push_back(0);
        }
        else if(v[i]>0)
        {
            pos.push_back(v[i]);
        }
        else
        {
            neg.push_back(v[i]);
        }
    }

    if(pos.size()==0)
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size()%2==0)
    {
       zero.push_back(neg.back());
       neg.pop_back();
    }
    cout<<neg.size()<<" ";
    for(auto it:neg)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<pos.size()<<" ";
    for(auto it:pos)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    cout<<zero.size()<<" ";
    for(auto it:zero)
    {
        cout<<it<<" ";
    }
}
