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
    int N;int K;
    cin>>N>>K;
    vector<int>hey;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        hey.push_back(x);
    }
    map<int,int>hf;
    for(int i=0;i<N;i++)
    {
        hf[hey[i]]++;
    }
    /*for(auto it=hf.begin();it!=hf.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
   }*/
   int count=0;
    for(auto it=hf.begin();it!=hf.end();it++)
    {
        int x=it->first; //key
        int y=it->second; //value 

        if(hf.find(x+K)!=hf.end())
        {
            auto ix=hf.find(x+K);
            int z=ix->second;
            int prod=1;
            prod=y*z; //very crucial adi, jesus i spent an eternity just finding this intricate bug 
            count+=prod;
        }

        
    }
    cout<<count<<endl;

     
   }

  

}