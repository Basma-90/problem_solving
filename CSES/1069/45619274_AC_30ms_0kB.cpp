#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;
   int i = 0; // Start from the first character
   int len = s.size();
   int mx = 0;
   int cnt = 1;
   while (i < len) {
       if (i > 0 && s[i] == s[i - 1]) {
           cnt++;
       } else {
           cnt = 1;
       }
       mx = max(mx, cnt);
       i++; // Always increment i in each iteration
   }
   cout << mx << "\n";
}
