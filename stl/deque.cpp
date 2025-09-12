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
    deque<int>fina;
    while(Q--)
    {
        string s;
        cin>>s;
        if(s=="insertback")
        {
            int x;
            cin>>x;
           fina.push_back(x);
        }
        if(s=="eraseback")
        {
            if(!fina.empty())
           {
              fina.pop_back();
           }
        }
        if(s=="erasefront")
        {
            if(!fina.empty())
            {
                fina.pop_front();
            }
        }
        if(s=="insertfront")
        {
            int x;
            cin>>x;
            fina.push_front(x);
        }
        if(s=="printfront")
        {
            if(!fina.empty())
            {
                cout<<fina[0]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(s=="printback")
        {
            if(!fina.empty())
            {
                cout<<fina[fina.size()-1]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        if(s=="print")
        {
            int x;
            cin>>x;
            if(x<fina.size() && x>=0)
            {
               cout<<fina[x]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
 }
 }

 
