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
   ll n,m;
   cin>>n>>m;
   deque<int>q;
    int arr[109];
   for(int i=1;i<=n;i++)
   {
      cin>>arr[i];
      q.push_back(i);
   }
   while(q.size()>1)
   {
       int y=q.front();
       q.pop_front();
        arr[y]-=m;
        if(arr[y]>0)
        {
            q.push_back(y);
        }
   }
   cout<<q.front()<<endl;

    return 0;
}
