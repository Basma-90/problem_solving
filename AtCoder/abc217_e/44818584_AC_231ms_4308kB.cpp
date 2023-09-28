#include <iostream>
using namespace std;
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast();
   long long q;
   cin>>q;
   deque<long long>dq;
    priority_queue<int, vector<int>, greater<int>> pq;
   while(q--)
   {
       long long z;
       cin>>z;
       if (z==1)
       {
           long long a;
           cin>>a;
           dq.push_back(a);
       }
       else if (z==2)
       {
           if(!pq.empty())
           {
               cout<<pq.top()<<"\n";
               pq.pop();
           }
           else
           {
               cout << dq.front() << "\n";
               dq.pop_front();
           }
       }
       else
       {
           while (!dq.empty()) {
               pq.push(dq.front());
               dq.pop_front();
           }
       }
   }
}
