#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

int main() {
  IOS int t;
  cin >> t;
  while (t--) {
   int Q;
   cin>>Q;
   multiset<int>ma;
   while(Q--)
   {
      string s;
      cin>>s;
      if(s=="add")
      {
        int x;
        cin>>x;
        ma.insert(x);
      }
      if(s=="erase")
      {
        int x;
        cin>>x;
        if(ma.find(x)!=ma.end())
        {multiset<int>::iterator it=ma.begin();
           while(it!=ma.end())
           {
            if(*it==x)
            {
                ma.erase(it);
                break;
            }
            it++;
           }
         }
      }
      if(s=="eraseall")
      {
        int x;
        cin>>x;
        if(ma.find(x)!=ma.end())
        {
            ma.erase(x);
        }
      }
      if(s=="find")
      {
        int x;
        cin>>x;
        if(ma.find(x)!=ma.end())
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      }
      if(s=="count")
      {
        int x;
        cin>>x;
        if(ma.find(x)!=ma.end())
        {//more efficient way to get frequency
            auto lb=upper_bound(ma.begin(),ma.end(),x);
            auto lq=lower_bound(ma.begin(),ma.end(),x);
            cout<<ma.count(x)<<endl;
           /* multiset<int>::iterator key=ma.begin();
            int count=0;
            while(key!=ma.end())
            {
               if(*key==x)
               {
                count++;
               }
               key++;
            }
            cout<<count<<endl;
            */
        }
        else{
            cout<<0<<endl;
        }
      }
  
       if(s=="print")
       {
        for(auto x:ma)
        {
            cout<<x<<" ";
        }
        cout<<endl;
       }

       if(s=="empty")
       {
        ma.clear();
       }
   }
  }
  return 0;
}
