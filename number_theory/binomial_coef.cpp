#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

int fact[1000100];
int binpow(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b%2!=0)
        {
            return (a*binpow(a,b-1))%MOD;
        }

     if(b%2==0)
     {
        int temp=binpow(a,b/2);
        return (temp*temp)%MOD;
     }   
}
int inverse(int c,int m)
{
    return binpow(c,m-2);
}
void facto()
{
    fact[0]=1;fact[1]=1;
    for(int i=2;i<=1000100;i++)
    {
        fact[i]=(i*fact[i-1])%MOD;
    }
}
signed main()
{
    facto();
    int T;
    cin>>T;
    while(T--)
    {
        int k;
        cin>>k;
        int ans;
        for(int i=0;i<=k;i++)
        {int temp=fact[k];
        int kemp=(fact[i]*fact[k-i])%MOD;
        int final=(temp*inverse(kemp,MOD))%MOD;
       cout<<final<<" ";
    }
        
        cout<<endl;
    }

}