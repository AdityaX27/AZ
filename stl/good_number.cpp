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
    vector<int>adm;
    for(int i=0;i<N;i++)
    {
        int c;
        cin>>c;
        adm.push_back(c);
    }
    map<int,int> mp;
    for(int i=0;i<N;i++)
    {
        mp[adm[i]]++;
    }
      int count=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        int x=it->first;
        int y=it->second;
        if(y>x)
        {
            count+=(y-x);
        }
        if(x>y)
        {
            count+=y;
        }
        if(x==y)
        {
            continue;
        }
    }
    cout<<count<<endl;
   }

  

}