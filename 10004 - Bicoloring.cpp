# include <cstdio>
# include <vector>
# include <iostream>
# include <cstring>
# include <queue>
# define pb(x) push_back(x)
using namespace std;

int main()
{
    //freopen("in.text","r",stdin);
    int i,l,x,p,e,color[1000],d,y;
    bool ret;
    queue<int>q;
    vector<int>edge[1000];
    while(cin>>p)
    {
        if(p==0)
        return 0;
        else
        {
             ret=true;
             cin>>d;
            for(i=0;i<d;i++)
            {
                cin>>x>>y;
                edge[x].pb(y);
                edge[y].pb(x);
            }
            memset(color,-1,sizeof(color));
            color[0]=0;
            q.push(0);
            while(!q.empty())
            {
                int uu=q.front();
                q.pop();
                for(int i=0;i<edge[uu].size();i++)
                {
                    int vv=edge[uu][i];
                    if(color[vv]==-1)
                    {
                        if(color[uu]==0)
                        color[vv]=1;
                        else
                        color[vv]=0;
                        q.push(vv);
                    }
                    else
                    {
                        if(color[vv]==color[uu])
                        {
                            ret=false;
                            break;
                        }
                    }
                }
                if(ret==false)
                break;
            }
        if(ret==true)
        cout<<"BICOLORABLE."<<endl;
        else
        cout<<"NOT BICOLORABLE."<<endl;
        for(i=0;i<p;i++)
        edge[i].clear();
        q=queue<int>();
        }
    }
return 0;
}
