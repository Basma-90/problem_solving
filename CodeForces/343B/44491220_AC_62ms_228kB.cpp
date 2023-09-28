#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
    string exp;
    cin>>exp;
    int l=exp.length();
    stack<char>s;
    s.push('*');
    for(int i=0;i<l;i++)
    {
        //+

        if(exp[i]==s.top()) {
            s.pop();
        }
        else
        {
            s.emplace(exp[i]);
        }
    }
    if(s.size()==1)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
}
