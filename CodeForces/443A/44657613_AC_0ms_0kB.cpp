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
    string s;
    getline(cin,s);
    set<char>ss;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            ss.insert(s[i]);
        }
    }
    cout<<ss.size()<<"\n";
    return 0;
}
