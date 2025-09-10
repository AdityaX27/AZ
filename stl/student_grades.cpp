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
     int N,M;
     cin>>N>>M;
     multiset<int>a;
     queue<int>b;
     for(int i=0;i<N;i++)
     {
         int x;
         cin>>x;
         a.insert(x);
     }
     for(int i=0;i<M;i++)
     {
        int x;
        cin>>x;
        b.push(x);
     }

      while(!b.empty())
    {int ix=b.front();
        if(a.find(ix)!=a.end())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            a.insert(ix);
        }
        b.pop();
    }

   }
}  

 
