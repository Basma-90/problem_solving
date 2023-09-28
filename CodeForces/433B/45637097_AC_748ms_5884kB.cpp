#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<std::vector<int>> vec(1009, std::vector<int>(1009, 0));
ll arr1[100009];
ll arr2[100009];
int main() {
  ll n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>arr1[i];
      arr2[i]=arr1[i];
  }
  for(int i=1;i<n;i++)
  {
      arr1[i]+=arr1[i-1];
  }
  sort(arr2,arr2+n);
  for(int i=1;i<n;i++)
  {
     arr2[i]+=arr2[i-1];
  }
  ll q;
  cin>>q;
  while(q--)
  {
      int x,y,z;
      cin>>x>>y>>z;
      if(x==1)
      {
          if(y!=1)
          {
              cout<<arr1[z-1]-arr1[y-2]<<"\n";
          }
          else
          {
              cout<<arr1[z-1]<<"\n";
          }
      }
      else
      {
          if(y!=1)
          {
              cout<<arr2[z-1]-arr2[y-2]<<"\n";
          }
          else
          {
              cout<<arr2[z-1]<<"\n";
          }
      }
  }
  
  
  
  
}