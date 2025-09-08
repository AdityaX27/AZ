#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
    map<int,int> mp={{32,232},{23,12},{103,101}};
    mp[32]=31;
 //iterating thorugh a map please do it dilligently 
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<" "<<endl;
    }
    //finding an element
    auto ifx=mp.find(32);
    if(ifx!=mp.end())
    {
        cout<<ifx->first<<" "<<ifx->second<<endl;
    }
    //upper bound and lower bound and its uses in the map to find the frequency of the same elements consecutively
    //only works in sorted arrays
   vector<int>vec={1,2,3,3,3,3,4,5,6,7};
    auto lb=upper_bound(vec.begin(),vec.end(),3);
    auto lq=lower_bound(vec.begin(), vec.end(),3);


    
    multimap<int,int>mkp={{31001,22},{31001,21},{31002,23},{31004,32},{31004,33}};
    
    mkp.insert(make_pair(31005,32));
    for(auto ixt=mkp.begin();ixt!=mkp.end();++ixt)
    {
        cout<<ixt->first<<" "<<ixt->second<<endl;
    }


  

}