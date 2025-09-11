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
   set<int>intersection;
   set<int>unionx;
   multiset<int>::iterator it=a.begin();
   multiset<int>::iterator ix=b.begin();

   if(N<=M)
   {
   while(it!=a.end())
   {
      if(*it==*ix)
      {
         unionx.insert(*it);
         intersection.insert(*it);
         difference.erase(*it);
         it++;
         ix++;
      }
      if(*it>*ix)
      {
         unionx.insert(*ix);
         ix++;
      }
      else if(*it<*ix)
      {
         unionx.insert(*it);
         it++;
      }
   }
   while(ix!=b.end())
   {
      unionx.insert(*ix);
      ix++;
   }
}
else{
    while(ix!=b.end())
   {
      if(*it==*ix)
      {
         unionx.insert(*ix);
         intersection.insert(*ix);
         difference.erase(*ix);
         it++;
         ix++;
      }
      if(*it>*ix)
      {
         unionx.insert(*ix);
         ix++;
      }
      else if(*it<*ix)
      {
         unionx.insert(*it);
         it++;
      }
   }
   while(it!=a.end())
   {
      unionx.insert(*it);
      it++;
   }

}
   for(auto z:unionx)
   {
      cout<<z<<" ";
   }
   cout<<endl;
   for(auto p:intersection)
   {
      cout<<p<<" ";
   }
   cout<<endl;
   for(auto q:difference)
   {
      cout<<q<<" ";
   }
   cout<<endl;
    
   }
}  
