#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define NEWLINE '\n'
#define N 1001001
int freq[N];
//if root is a prime then we get the 3 divisor 
void mod_sieve()
{freq[1]=0;
    for(int i=2;i<=N;i++)
    {
         freq[i]=1;
    }
    for(int i=2;i<=N;i++)
    {
        if(freq[i]==1)
            for(int j=i*i;j<=N;j+=i)
            {
                freq[j]=0;
            }
        
    }
}
signed main()
{
    mod_sieve();
    freq[1]=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(auto x:a)
    {int z=sqrt(x);

        if(z*z==x && freq[z]) //this condition is 24k gold since for proper sqrt it must be the multiple for the same
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}