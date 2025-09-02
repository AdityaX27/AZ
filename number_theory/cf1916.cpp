#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

signed main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        if(b%a==0)
        {
            ans=(b/a)*b;
        }
        else
        {
            int lcm=(a*b)/(__gcd(a,b));
            ans=lcm;
        }

        cout<<(ans+MOD)%MOD<<endl;
    }
}