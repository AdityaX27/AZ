#include<bits/stdc++.h>
using namespace std;
#define long long int


signed main()
{
    int N;
    cin>>N;
    multiset<int>mlt;
    multiset<int>finale;
    vector<int>fresh;
    for(int i=0;i<N;i++)
    {
        int X;
        cin>>X;
        fresh.push_back(X);
        mlt.insert(X);
    }
    
    for(auto x:fresh)
    {
        auto lv=finale.upper_bound(x);//number slightly greater than x for (K>N) no inclusive operator 
        cout<<"upper bound for "<<x<<" "<<*lv<<endl;
       // cout<<"finding for upperbound if found"<<" "<<finale.find(*lv)<<endl;
        if(lv==finale.end())
        {
            finale.insert(x); //new block
            for(auto z:finale)
            {
                cout<<z<<" ";
            }
            cout<<endl;
        }
        else{
            finale.erase(*lv);
            finale.insert(x);
            for(auto z:finale)
            {
                cout<<z<<" ";
            }
            cout<<endl;
        }
    }

    cout<<finale.size()<<endl;
    
}
