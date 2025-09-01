#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXI 1000100
#define MOD 1000000007
int freq[MAXI];
int spf[MAXI];
void spof()
{
    for(int i=2;i<MAXI;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<MAXI;i++)
    {
        if(spf[i]==i)
        {
            for(int j=2*i;j<MAXI;j+=i)
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
        int N;
        cin>>N;
        int arr[N];
        int ans=0;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        for(auto x:arr)
        {
            int reduced=1;
            int redcomp=1;
             while(x!=1)
             {
                int sf=spf[x];
                int exp=0;
                while(x%sf==0)
                {
                   exp++;
                   x=x/sf;
                }
                exp=exp%3;
                if(exp==1)
                {
                    reduced*=sf;
                    redcomp*=sf*sf;
                }
                else if(exp==2)
                {
                    reduced*=sf*sf;
                    redcomp*=sf;
                }
             }
             if(redcomp<MAXI)
             {
                ans+=freq[redcomp];
                freq[reduced]++;
             }
        }
       cout<<ans<<endl;
       for(int i=0;i<MAXI;i++)
       {
        freq[i]=0;
       }
    
      

}