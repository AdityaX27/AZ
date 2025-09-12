#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
 int T;
 cin>>T;
 while(T--)
 {
    int N;
    cin>>N;
    set<int>first;
    multiset<int>second;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        first.insert(x);
    }
    for(auto x:first)
    {
        second.insert(x);
    }
    cout<<second.size()<<endl;
 }

 
}