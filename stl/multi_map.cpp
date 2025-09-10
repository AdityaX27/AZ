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
  multimap<string,int>map;
  while(Q--)
  {
   string s;
   cin>>s;
   if(s=="add")
   {string k;
    int n;
    cin>>k>>n;
    map.insert(make_pair(k,n));
   }
   
   if(s=="erase")
   {
      string jo;
      cin>>jo;
      if(map.find(jo)!=map.end())
      {
        map.erase(map.find(jo));
      }
   }

   if(s=="eraseall")
   {
      string jo;
      cin>>jo;
      if(map.find(jo)!=map.end())
      {
        map.erase(jo);
      }
   }

   if(s=="print")
   {
    string jo;
    cin>>jo;
    if(map.find(jo)!=map.end())
    {
      auto it=map.find(jo);
      cout<<it->second<<endl;
    }
    else{
      cout<<0<<endl;
    }
   }

  }
 }  

 
}