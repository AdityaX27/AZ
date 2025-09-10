#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
    multiset<int>myset={2,5,4};
    queue<int>b;
    b.push(7);
    b.push(4);
    b.push(1);
    b.push(4);
    b.push(5);
    //multiset sorts it ascendingly there the answer would vary
    int M=5;
    while(!b.empty())
    {int ix=b.front();
        if(myset.find(ix)!=myset.end())
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        b.pop();
    }

}  

 
