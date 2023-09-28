#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> prefixSum(200009, 0);
vector<ll>vec(200009,0);
int main() {
  int n,k,q;
  cin>>n>>k>>q;
  while(n--)
  {
      int l,r;
      cin>>l>>r;
      vec[l-1]+=1;
      vec[r]+=-1;
  }
  for(int i=1;i<200009;i++)
  {
      vec[i]+=vec[i-1];
  }
   for(int i=0;i<200009;i++)
  {
     
   if (vec[i] >= k) {
            prefixSum[i] = 1;
        }
        if (i > 0) {
            prefixSum[i] += prefixSum[i - 1];
        }
  }
  while(q--)
  {
      int a,b;
      cin>>a>>b;
       int cnt;

        
        if (a > 1) {
            cnt = prefixSum[b - 1] - prefixSum[a - 2];
        } else {
            cnt = prefixSum[b - 1];
        }

        cout << cnt << "\n";
      
     
  }
  
}