#include<bits/stdc++.h>
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
        stack<int>a;
        stack<int>b;

        while(Q--)
        {int n;string s;
           cin>>s;
           if(s=="push")
           {
              cin>>n;
              a.push(n);
           }
           if(s=="pop")
           {
           if(!b.empty())
           {
            int x=b.top();
            b.pop();
            cout<<x<<endl;
           }
           else{
             while(!a.empty())
             {
                b.push(a.top());
                a.pop();
             }
             int a=b.top();
             b.pop();
             cout<<a<<endl;

            }}
           
        
        if(s=="front")
        {
            if(!b.empty())
            {
                cout<<b.top()<<endl;
            }

            else{
                while(!a.empty())
                {
                    b.push(a.top());
                    a.pop();
                }
                cout<<b.top()<<endl;
            }
          }   
    } 
}}