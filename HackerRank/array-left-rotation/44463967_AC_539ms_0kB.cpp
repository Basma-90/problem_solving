#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}int main() {
    ll steps;
    int size;
    cin>>size>>steps;
    vector<ll>arr(size);
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    }
   if(steps==size)
   {
       for(int i=0;i<size-1;i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<arr[size-1];
   }
   else
   {
       for(int i=steps;i<size;i++)
       {
           cout<<arr[i]<<" ";
       }
       for(int i=0;i<steps-1;i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<arr[steps-1];
   }

    return 0;
}