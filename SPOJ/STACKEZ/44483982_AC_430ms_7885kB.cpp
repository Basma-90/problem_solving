#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
    int  t;
    scanf("%d",&t);
    stack<int>s;
    while(t--) {
        int p;
        scanf("%d", &p);
        if (p == 1) {
            int m;
            scanf("%d", &m);
            s.push(m);
        }
        else if(p==2)
        {
            if(!s.empty())
            {
                s.pop();
            }
        }
        else
        {
            if (s.empty()) {
                printf("Empty!\n");
            } else {
                printf("%d\n", s.top());
            }
        }

    }
    return 0;
}
