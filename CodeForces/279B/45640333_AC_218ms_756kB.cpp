#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;
    ll arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   ll ii=0;
   ll num=0;
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       while(ii<n&&sum+arr[ii]<=x)
       {
           sum+=arr[ii];
           ii++;
       }
       num=max(num,ii-i); //to get dist
       sum-=arr[i];
   }
   cout<<num<<"\n";
}