#include <bits/stdc++.h>
using namespace std;
#define NEWLINE '\n'
#define int long long
#define MOD 1000000007
#define MAXI 1000100
int prime[MAXI];
int spf[MAXI];
int spof[MAXI];
 vector<long long>divisors[1000100]; //list within a list just like List<List<Integer>> in Java
 int sum(int a,int b)
 {
    cout<<sum<<endl;
 }
int binpow(int a,int b,int m)
{
    if(a%m!=0)
    {
        b=b%(m-1);
    }
    if(b==0)
    {
        return 1;
    }
    if(b%2!=0)
    {
        return (a*binpow(a,b-1,m))%m;
    }
    else if(b%2==0)
    {
        int temp=binpow(a,b/2,m);
        return (temp*temp)%m;
    }
}
int inverse(int c,int m)
{
    return binpow(c,m-2,MOD);
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
//fact 0(sqrt(N)) for X<=10^12 
void fact(int X)
{
    for(int i=1;i*i<=X;i++)
    {
        if(X%i==0)
        {
            cout<<i<<" ";
            if(i!=X/i)
            {
                cout<<X/i<<" ";//preventing perfect squares
            }
        }
    }
    cout<<endl;
}

void primefact(int X)
{
    for(int i=2;i*i<=X;i++)
     {
        if(X%i==0)
        {
            int ipow=0;
            while(X%i==0)
            {
                ipow++;
                X/=i;
            }
            
            cout<<i<<"x"<<ipow<<" ";
        }
     }
     if(X!=1)//for that prime factor which is greater than root(X) since we cant have two factors greater than root(X) otherwise their products would greatly exceed X
            {
             cout<<X<<" ";
            }

}
void precomputation() //workable for X<=10^6 since array wouldnt overflow for this case, better optimization
{//precomputation takes sigma(N+(N/2)+(N/3)+(N/4)...) following a HM series therefore it will be O(NlogN)
   //avg no.of divisors = NlogN/N=logN
   for(int i=1;i<=1000000;i++)
   {
    for(int j=1;j<=1000000;j=j+i)//kinda like sieve we are marking down all the factors of a particular number and storing them in the containers for their respective factors
    {
        divisors[j].push_back(i);
    }
   }
}

void sieve()//sigma(N+N/2+N/3+N/5+N/7+N/11....N/(prime)) this would result in a tc of O(log(logN))
{
    for(int i=2;i<=1000000;i++)
    {
        prime[i]=1;}//setting every no. to 1 indicating that its prime
    for(int i=2;i<=1000000;i++)    
     {
        if(prime[i]==1)
        {//if its prime then set every factor of that requisite number to 0
            for(int j=2*i;j<=1000000;j=j+i)
            {//2,4,6...3,6,9....
                prime[j]=0;
            }
        }
     }  
}

void spof() //smallest prime factor
{
    for(int i=2;i<=1000000;i++)
    {
        spf[i]=i; //assuming every number is the smallest spof of its own
    }
    for(int i=2;i<=1000000;i++)
    {
        if(spf[i]==i)
        {
            for(int j=2*i;j<=1000000;j+=i)
            {
                if(spf[j]==j) //if not marked then only update it in next iteration without the condition it will give the largest prime factor
                {
                    spf[j]=i;
                }
            }
        }
    }

}


signed main()
{
    fact(20);
    primefact(150); //O(root(X))
    precomputation();
    cout<<endl;
    int j=49;
    for(auto d: divisors[j+1])
    {
        cout<<d<<" ";
    }
    cout<<endl;
    spof();
    for(int i=2;i<=100;i++)
    {
        cout<<i<<" "<<spf[i]<<" "<<endl;
    }

}