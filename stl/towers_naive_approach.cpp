#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<stack<int>>vc;

     int N=5;

     for(int i=0;i<N;i++)
     {
        int x;
        cin>>x;
        if(vc.size()==0)
        {
            stack<int>st;
            st.push(x);
            vc.push_back(st);
        }
        else{
            bool teri=false;
             for(int j=0;j<vc.size();j++)
             {
                if(x<vc[j].top())
                {
                    vc[j].push(x);
                    teri=true;
                    break;
                }

             }
             if(!teri)
             {
                stack<int>ne;
                ne.push(x);
                vc.push_back(ne);
             }
        }
     }

     for(int i=0;i<vc.size();i++)
     {
        while(!vc[i].empty())
        {
            cout<<vc[i].top()<<" ";
            vc[i].pop();
        }
        cout<<endl;
     }
 
  }

