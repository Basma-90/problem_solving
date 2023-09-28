#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
int p;
scanf("%d",&p);
queue<int>q;
while(p--)
{
    int t;
    scanf("%d",&t);
    if(t==1)
    {
        int y;
        scanf("%d",&y);
        q.push(y);
    }
    else if(t==2)
    {
          if(!q.empty())
          {
              q.pop();
          }
    }
    else
    {
        if (q.empty()) {
            printf("Empty!\n");
        } else {
            printf("%d\n", q.front());
        }
    }
}

    return 0;
}
