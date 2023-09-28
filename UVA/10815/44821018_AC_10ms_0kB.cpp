#include <iostream>
#include <sstream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    set<string> st;
    while (cin >> input) {
        string  d="";
        for (int i=0;i<input.size();i++)
        {
            char ch= ::tolower(input[i]);
            if (ch>='a'&&ch<='z')
            {
                d+=ch;
            }
            else if (!d.empty())
            {

                st.insert(d);
                d="";

            }
        }
        if (!d.empty())
        {
            st.insert(d);
        }

    }
    for (auto it:st) {
        cout<<it<<"\n";
    }
}

