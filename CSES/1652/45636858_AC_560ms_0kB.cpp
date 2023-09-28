#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<std::vector<int>> vec(1009, std::vector<int>(1009, 0));
int main() {
  ll n,q;
  cin>>n>>q;
  for(int i=1;i<=n;i++)
  {
      for(int y=1;y<=n;y++)
      {
          char ch;
          cin>>ch;
          if(ch=='.')
          {
              vec[i][y]=0;
          }
          else
          {
              vec[i][y]=1;
          }
      }
  }
   for(int i=2;i<=n;i++)
  {
      for(int y=1;y<=n;y++)
      {
         vec[i][y]+=vec[i-1][y];
      }
  }
  for(int i=1;i<=n;i++)
  {
      for(int y=2;y<=n;y++)
      {
         vec[i][y]+=vec[i][y-1];
      }
  }
  while(q--)
  {
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
       ll total = vec[x2][y2] - vec[x1 - 1][y2] - vec[x2][y1 - 1] + vec[x1 - 1][y1 - 1];
        cout << total << "\n";
  }
  
  
}
