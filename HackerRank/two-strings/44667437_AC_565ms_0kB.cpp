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
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        map<char, int> mapp;
        map<char, int> mapp2;
        for (auto it: s1) {
            mapp[it]++;
        }
        for (auto it: s2) {
            mapp2[it]++;
        }
        bool flag = 0;
        for (char i = 'a'; i <= 'z'; i++) {
            if (mapp[i] > 0 && mapp2[i] > 0) flag = 1;
        }
        if (flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
