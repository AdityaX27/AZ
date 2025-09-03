#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define NEWLINE '\n'
#define N 1001000
//if root is a prime then we get the 3 divisor 
//fast_factorization
int spf[1001000];
void spof()
{
    for(int i=2;i<=N;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=N;j=j+i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
}

signed main()
{ 
    spof();
    int n;
    cin>>n;
    int pr=1;
    vector<int>store;
    store.push_back(1);
    //fast factorization
    while(n>1) //this is exclusively for prime factorization and not for normal factorization
    {
        store.push_back(spf[n]);
        n=n/spf[n];
    }

    for(auto x: store)
    {
        cout<<x<<endl;
    }

}