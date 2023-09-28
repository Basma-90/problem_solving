#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  ll siz;
  cin>>siz;
  int arr[siz];
  for(int i=0;i<siz;i++)
  {
      cin>>arr[i];
  }
  for(int i=1;i<siz;i++)
  {
      arr[i]+=arr[i-1];
  }
  int q;
  cin>>q;
  while(q--)
  {
      int i,j;
      cin>>i>>j;
      if(i==0)
      {
          cout<<arr[j]<<"\n";
      }
      else
      {
          cout<<arr[j]-arr[i-1]<<"\n";
      }
  }
  
    return 0;
}