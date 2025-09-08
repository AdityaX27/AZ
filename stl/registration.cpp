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
    int N;
    cin>>N;
    map<string,int>kom;
    while(N--)
    {
        string s;
        cin>>s;
        if(kom.find(s)==kom.end())
        {
           kom[s]++;
           cout<<"OK"<<endl;
        }
        else{
            cout<<s<<kom[s]<<endl;
            kom[s]++;
        }
    }
   }

  

}