#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int dear[1000100];
void dearra()
{
    dear[1]=0;dear[2]=1;
    for(int i=3;i<=1000100;i++)
    {
       dear[i]=((i-1)*(dear[i-1]+dear[i-2]))%MOD;
    }
}

signed main()
{
    dearra();
   int N;
   cin>>N;
   cout<<dear[N]<<endl;
}