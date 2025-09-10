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
     multiset<int>b;
     multiset<int>difference;
     
     for(int i=0;i<N;i++)
     {
        int x;
        cin>>x;
        a.insert(x);
        difference.insert(x);
        //union.push(-1*x);
     }
     for(int i=0;i<M;i++)
     {
        int x;
        cin>>x;
        b.insert(x);
        //union.push(-1*x);
     }
   multiset<int>intersection;
   multiset<int>unionx;
   multiset<int>::iterator it=a.begin();
   multiset<int>::iterator ix=b.begin();


     while(it!=a.end())
     {
        cout<<*it<<" ";
        it++;
     }
     cout<<endl;
    
   }
}  
