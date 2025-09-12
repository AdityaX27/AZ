#include<bits/stdc++.h>
using namespace std;
#define long long int


int main()
{
    int N;
    cin>>N;

    vector<stack<int>>vim;

    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;

        if(vim.empty())
        {
            stack<int>tr;
            tr.push(x);
            vim.push_back(tr);
        }
        else
        {
            bool hig=false;
            for(int j=0;j<vim.size();j++)
            {
                if(x<vim[j].top())
                {
                    vim[j].push(x);
                    hig=true;
                    break;
                }
            }
            if(!hig)
            {
                stack<int>niu;
                niu.push(x);
                vim.push_back(niu);
            }
        }
    }

    for(int i=0;i<vim.size();i++)
 {
   // cout<<i<<"="<<" ";
    while(!vim[i].empty())
    {
        cout<<vim[i].top()<<"<-";
        vim[i].pop();
    }
    cout<<endl;
 }

    
}
