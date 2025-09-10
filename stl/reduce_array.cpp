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
        int N;
        cin>>N;
        //vector<int>br;
           priority_queue<int>pq;
        for(int i=0;i<N;i++)
        {
          int x;
          cin>>x;
          pq.push(-1*x);
        }
   
     if(pq.size()==1)
      {
        cout<<-1*pq.top()<<endl;
      }
      else
        {
              int count=0;
            while(pq.size()>1)  //-3 -3 -4
        {
            int x=-1*pq.top();//1 3
            pq.pop();
            int y=-1*pq.top();//2 3
            pq.pop();
            count+=(x+y);//3+6+
            pq.push(-1*(x+y));//3 
        }
        cout<<count<<endl;
    }
    }
}