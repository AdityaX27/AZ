#include<bits/stdc++.h>
using namespace std;
#define long long int


signed main()
{
    int N;
    cin>>N;
    multiset<int>mlt;
    
    vector<int>fresh;
    for(int i=0;i<N;i++)
    {
        int X;
        cin>>X;
        fresh.push_back(X);
    }
    
    for(auto x:fresh)
    {
        auto ko=mlt.upper_bound(x);
        if(ko==mlt.end())
        {
            mlt.insert(x);
        }
        else{
            cout<<"the number just greater than "<<x<<" "<<*ko<<endl; 
            mlt.erase(ko);
            mlt.insert(x);
            
        }
    
    }
    
}
