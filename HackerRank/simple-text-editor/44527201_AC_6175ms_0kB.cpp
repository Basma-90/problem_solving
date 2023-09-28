#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
   stack<string>s;
   string t="";
   int q;
   cin>>q;
   while(q--)
   {
       int num;
       cin>>num;
       if(num==4) {
           if (!s.empty()) {
               s.pop();
               if (!s.empty()) {
                   t = s.top();
               } else {
                   t = "";
               }
           }
       }
      else if(num==1)
       {
           string g;
           cin>>g;
           t.append(g);
           s.push(t);
       }
       else if(num==2)
       {
           int n;
           cin>>n;
           t.erase(t.length()-n,n);
           s.push(t);
       }
       else if(num==3)
       {
           int m;
           cin>>m;
           cout<<t[m-1]<<"\n";
       }

   }

    return 0;
}
