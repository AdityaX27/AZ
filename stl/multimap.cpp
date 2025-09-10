#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
  multimap<string,int>map;
  map.insert(make_pair("adi",23));
  map.insert(make_pair("mani",354));
  map.insert(make_pair("jkra",52));
  map.insert(make_pair("adi",43));
  map.insert(make_pair("adi",15));
  
  //every query should initiate this
  for(auto it=map.begin();it!=map.end();it++)
  {
    string x=it->first;
    int y=it->second;
    if(x=="adi")
    {
        map.erase(it);
        break;
    }
  //  cout<<it->first<<" "<<it->second<<endl;
  }
  
  for(auto it=map.begin();it!=map.end();it++)
  {
    string x=it->first;
    int y=it->second;
    cout<<it->first<<" "<<it->second<<endl;
  }

 
}