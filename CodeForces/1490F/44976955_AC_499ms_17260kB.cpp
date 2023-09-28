#include <iostream>
#include <sstream>
#include <set>
#include <string>
#include <cctype>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int main() {
   long long t;
   cin>>t;
   map<long long,long long>mapp;
   vector<long long>vec;
   map<long long,long long>mp;
   set<long long>st;
   while(t--)
   {
       map<long long,long long>mapp;
       map<long long,long long>mp;
       long long size;
       long long cnt=0;
       cin>>size;
       vector<long long>vec(size);
       for (int siz = 0;  siz < size; siz++) {
           long long z;
           cin>>z;
           mapp[z]++;
       }
       // 1 3 2 1 4 2   1- >2 2->2 3->1 4->1  1->2 2->2  1 1 2 2
       long long mx=0;
     for(auto& item:mapp)
     {
          mp[item.second]++;
          vec.push_back(item.second);
     }
       sort(vec.begin(),vec.end());
     long long ans=size;
     long long x=0,y=0;
       for ( auto item:mp ) {
           auto g_freq= upper_bound(vec.begin(),vec.end(),item.first)-vec.begin(); //1
            x=vec.size()-g_freq; //3
            y=item.first*item.second+x*item.first; //2+3*1
            ans= min(ans,size-y);

       }
       cout<<ans<<"\n";



   }
}
