#include <bits/stdc++.h>
using namespace std;
#define int long long
#define NEWLINE '\n'

signed main()
{
   
  vector<int> adi={3,4,5,6,2,21,432,23,52352};
  priority_queue<int>keep;
  //b heap implementation in the bg 
  //the heap sort technique suffices
   //inverting the priority queue involves multiplying every integer by -1 and inculcating the values
  for(int i=0;i<adi.size();i++)
  {
    keep.push(-1*adi[i]);
  }
  cout<<-1*keep.top();

}