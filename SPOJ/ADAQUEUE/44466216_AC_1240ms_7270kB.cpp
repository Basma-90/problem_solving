#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
ll t;
cin>>t;
deque<ll>q;
    bool reversed=0;
while(t--)
{
    string s;
    cin>>s;
    if(s=="toFront")
    {
        ll num;
        cin>>num;
        if(reversed)
        {
            q.push_back(num);
        }
       else
        {
           q.push_front(num);
        }
    }
    else if(s=="push_back")
    {
        ll num;
        cin>>num;
        if(reversed)
        {
            q.push_front(num);
        }
        else
        {
            q.push_back(num);
        }

    }
    else if(s=="front")
    {
        if(!q.empty()&&!reversed)
        {
           cout<<q.front()<<endl;
           q.pop_front();
        }
        else if(!q.empty()&&reversed)
        {
            cout<<q.back()<<endl;
           q.pop_back();
        }
        else
        {
            cout<<"No job for Ada?"<<endl;
        }
    }
    else if(s=="back")
    {
        if(!q.empty()&&(!reversed))
        {
            cout<<q.back()<<endl;
            q.pop_back();
        }
        else if(!q.empty()&&(reversed))
        {
            cout<<q.front()<<endl;
            q.pop_front();
        }
        else
        {
            cout<<"No job for Ada?"<<endl;
        }
    }
    else if(s=="reverse")
    {
       reversed=!reversed;
    }

}
    return 0;
}