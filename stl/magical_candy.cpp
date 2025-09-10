#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
 int T;
 cin>>T;
 while(T--)
 {
  int N,K;
  cin>>N>>K;
  priority_queue<int>pq;
  for(int i=0;i<N;i++)
  {
    int p;
    cin>>p;
    pq.push(p);
  }
  int count=0;
  while(K--)
  {
    int m=pq.top();
    count+=m;
    m=m/2;
    pq.pop();
    pq.push(m);
  }
  cout<<count<<endl;

 }  

 
}