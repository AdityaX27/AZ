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
     auto firsty=a.begin();
     auto secondy=b.begin();
     set<int>unionx;
     set<int>intersection;  
     if(N<=M)
     {
         while(firsty!=a.end())
         {
            if(a.find(firsty)==b.find(secondy))
            {
                intersection.insert(a.find(firsty));
                difference.erase(a.find(firsty));
                firsty++;
                secondy++;
            }

             if(a.find(firsty)>b.find(secondy))
             {
                 unionx.insert(b.find(secondy));
                 secondy++;
             }
             else{
                unionx.insert(a.find(firsty));
                firsty++;
             }

             
         }
     }
     else{
        while(secondy!=b.end())
         {
            if(a.find(firsty)==b.find(secondy))
            {
                intersection.insert(b.find(secondy));
                difference.erase(a.find(firsty));
                firsty++;
                secondy++;
            }

             if(a.find(firsty)>b.find(secondy))
             {
                 unionx.insert(b.find(secondy));
                 secondy++;
             }
             else{
                unionx.insert(a.find(firsty));
                firsty++;
             }
         }
     }
     while(firsty!=a.end())
     {
        unionx.insert(a.find(firsty));
     }
     while(secondy!=b.end())
     {
        unionx.insert(b.find(secondy));
     }
     
     for(auto x:unionx)
     {
        cout<<x<<" ";
     }
     cout<<endl;
     for(auto y:intersection)
    {
        cout<<y<<" ";
    }
    cout<<endl;
     for(auto z: difference)
     {
        cout<<z<<" ";
     }
     cout<<endl;
    
   }
}  
