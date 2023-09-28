#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main()
{
  int t;
  cin>>t;
  int arr[100008],arr2[100008];
  while(t--) {
      int size;
      cin>>size;
      for(int i=1;i<=size;i++)
      {
          cin>>arr[i];
      }
      int k=1;
      for(int i=1;i<=size;i++)
      {
        if(arr[i]>arr[k])
        {
            arr2[i]=k=i;
        }
        else
        {
            arr2[i]=k;
        }
      }
      for(int i=size;i;i--)
      {
          for(int y=arr2[i];y<=i;y++)
          {
              cout<<arr[y]<<" ";
          }
          i=arr2[i];

      }
cout<<"\n";
  }
}
