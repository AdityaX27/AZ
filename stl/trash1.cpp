#include<bits/stdc++.h>
using namespace std;
#define long long int


int main()
{
    multiset<int>mp={3,2,1,5,4,9,9};

    for(auto x:mp)
    {
        auto ld=mp.lower_bound(x);
        cout<<x<<"->"<<*ld<<" ";
    }
    
}
