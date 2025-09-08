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
     map<string,int>mp;
    while(Q--)
    {
       string s;int marks;

       cin>>s;
       if(s=="add")
       {
        int mar;
        string name;
        cin>>name>>mar;
       mp[name]=mar;
       }
       if(s=="erase")
       {
        string name;
          cin>>name;
          if(mp.find(name)!=mp.end())
          {
            mp[name]=0;
          }

       }
       if(s=="print")
       {
        string name;
        cin>>name;
        if(mp.find(name)!=mp.end())
        {
            cout<<mp[name]<<endl;
        }
        else{cout<<0<<endl;}
       }

    }
   }

  

}