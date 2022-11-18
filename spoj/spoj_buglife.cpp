#include<iostream>
#include<vector>
using namespace std;

vector<int>al[2003];
vector<bool>vis(2003,0);
vector<bool>col(2003,0);

bool dfs(int n,int c)
{
        vis[n]=true;
        col[n]=c;
        for(int i=0;i<al[n].size();i++)
        {
            if(!(vis[al[n][i]]))
            {
                if(dfs(al[n][i],c^1)==false)return false;
            }
            if(col[n]==col[al[n][i]])return false;
        }
    return true;
}

int main()
{
    int t;cin>>t;
    int c=1;
    while(t--)
    {
         int n,e;
         cin>>n>>e;

         while(e--)
         {
            int x,y;
            cin>>x>>y;
            al[x].push_back(y);
            al[y].push_back(x);
         }
         
         bool f=1;
         for(int i=1;i<=n;i++)
         {
            if(!vis[i])f&=dfs(i,1);
         }

         if(!f)cout<<"Scenario #"<<c++<<":\nSuspicious bugs found!\n";
         else cout<<"Scenario #"<<c++<<":\nNo suspicious bugs found!\n";

         for(int i=1;i<=n;i++)
         {
            al[i].clear();
         }
         vis.assign(2003,false);
         col.assign(2003,false);
    }
}