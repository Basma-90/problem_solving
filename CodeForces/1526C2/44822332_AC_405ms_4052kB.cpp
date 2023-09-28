#include <iostream>
#include <sstream>
#include <set>
#include <string>
#include <cctype>
#include <queue>
using namespace std;

int main() {
    priority_queue<long long ,vector<long long>,greater<long long>>pq;
    long long num;
    cin>>num;
    long long sum=0;
    for(int i=1;i<=num;i++)
    {
        long long x;
        cin>>x;
        pq.push(x);
        sum+=x;
        while(sum < 0){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout<<pq.size()<<"\n";
}
