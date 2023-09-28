#include <iostream>
using namespace std;
#include <set>
#include <map>
#include <stack>
#include <vector>
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast();
    int tt;
    cin>>tt;
    vector<string>k;
    map<string ,int>m;
    vector<string>ans;
    for(int i=0;i<tt;i++)
    {
        string s;
        cin>>s;
        k.push_back(s);
        m[s]=-1;

    }
    for(int i=0;i<tt;i++)
    {
        if (m[k.back()]==-1)
        {
            ans.push_back(k.back());
            m[k.back()]=1;
            k.pop_back();
        }
        else
        {
            k.pop_back();
        }

    }

    for (string it:ans) {
        cout<<it<<"\n";
    }
}
