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
char c;
bool is_valid(string expression)
{
    stack<char>s;
    int len=expression.length();
    for(int i=0;i<len;i++)
    {
        if(expression[i]=='('||expression[i]=='{'||expression[i]=='[')
        {
            s.push(expression[i]);
        }
        else if(s.empty() || (expression[i] == ')' && s.top() != '(') || (expression[i] == '}' && s.top() != '{') || (expression[i] == ']' && s.top() != '['))
        {
            return false;
        }
        else
        {
            s.pop();
        }
    }

    return s.empty();
}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
        string expression;
        cin>>expression;
        if(is_valid(expression))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}