#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    queue<int>sqw({1,3,5,6});
    sqw.push(5);
    while(!sqw.empty()-1)
    {
        cout<<sqw.front()<<endl;
        sqw.pop();
    }
  cout<<endl;

}