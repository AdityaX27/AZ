// Write your code here
#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int Q;
        cin>>Q;
        stack<int>adm;
        while(Q--)
        {
            string s;int n;
            cin>>s;
            if(s=="add")
            {   cin>>n;
                adm.push(n);
            }
            if(s=="print")
            {
                cout<<adm.top()<<endl;
            }
            if(s=="remove")
            {
                adm.pop();
            }
        }
    }

}