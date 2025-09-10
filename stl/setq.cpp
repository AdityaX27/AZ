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
    int Q;
    cin>>Q;
    multiset<int>se;
    while(Q--)
    {
        string s;
        cin>>s;
        if(s=="add")
        {
            int x;
            cin>>x;
            se.insert(x);
        }
        if(s=="erase")
        {int x;
            cin>>x;
            if(se.find(x)!=se.end())
            {
                se.erase(x);
            }
        }
        if(s=="find")
        {int x; cin>>x;
            if(se.find(x)!=se.end())
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        if(s=="print")
        {
            for(auto x:se)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        if(s=="empty")
        {
            se.clear();
        }
    }
 }

 
}