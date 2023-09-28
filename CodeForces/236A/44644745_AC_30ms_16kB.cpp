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

int main () {
 fast();
 set<char>s;
 string t;
 cin>>t;
 for(auto it:t)
 {
     s.insert(it);
 }
if(s.size()%2==0)
{
    cout<<"CHAT WITH HER!"<<"\n";

}
else
{
    cout<<"IGNORE HIM!"<<"\n";
}

}