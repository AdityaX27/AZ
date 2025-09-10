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
  priority_queue<int>pq;
  while(Q--)
  {
      string s;
      cin>>s;
      if(s=="add")
      {
        int x;
        cin>>x;
        pq.push(x);
      }
      if(s=="remove")
      {
        if(!pq.empty())
        {
          pq.pop();
        }

      }
      if(s=="print")
      {
        if(!pq.empty())
        {
          cout<<pq.top()<<endl;
        }
      }
  }
 }  

 
}