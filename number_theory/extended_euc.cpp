#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

//for ax+by=c the equation can be reduced using bezot identity to ax+by=gcd(a.b)
//so to solve we must reduce and find x,y recursively until one of them yields 0 in the gcd
//for 30 and 20 gcd would be .... no 10 yes
//therefore for 30x+20y=10 we would have a solution (1,-1) as the start right
//ummmmmmmm....but why the combination and what purpose does it serve we just cant have it hanging around for nothing 
//let me think...okay so lets divide 30/10=3 and 20/10=2 so (3x+2y=1) 
//for 56x + 15y= gcd(56,15)
//(3*15+11)x+(1*11+4)y=gcd(56,15)
//one way to envision gcd is the minimum number of steps(k) required to go from b-->a (for min=b)
//so lets say i wish to jump from no wait there is a contradiction
//okay so one thing is resolute for we know that the difference would be divisible by the gcd right
//so hoppinh from b to a would require you a certain integer k taht would be divisible by both the numbers therefore in order to fulfill that we would be requirign the difference of the numebrs 
//for lets say 20 and 12 gcd is 4....to progress from 12 to 20 would require 4*2 hops but i can just directly jump to 20 right, theres the contradiction
//
int equ(int a,int b,int &x,int &y)//extended euc algo
{
   if (b==0)
   {
    x=1;
    y=0;
    return a;
   }
   int x1,y1;
   int gcd=equ(b,a%b,x1,y1); //recursively call out the method to reduce a%b 
   x=y1;
   y=x1-(a/b)*y1;

   return gcd;
}
int subgcd(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    if(a>b)
   {
    return subgcd(a-b,b);
   }
   return subgcd(a,b-a);
}
int gc(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    if(a>b){
        return gc(a%b,b);
    }
    return gc(a,b%a);
}

signed main()
{
    int a,b;
    cin>>a>>b;
    cout<<gc(a,b)<<endl;
    

}