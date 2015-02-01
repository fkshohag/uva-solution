# include <iostream>
# include <cstdio>
# include <vector>
# include <queue>
# include <cstring>
# define MAX 101
using namespace std;
int node,edge,INDEG[MAX];
int i,j;
vector<int>top_sort(int [][MAX]);
int main()
{
    while(scanf("%d %d",&node,&edge)==2)
    {
        if(node==0&&edge==0)
        {
            break;
        }
        int Adjoint_list[MAX][MAX];
        memset(INDEG,0,sizeof(INDEG));
        memset(Adjoint_list,0,sizeof(Adjoint_list));
        for(i=0;i<edge;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            Adjoint_list[x][y]=1;
        }
        for(i=1;i<=node;i++)
        {
            for(j=1;j<=node;j++)
            {
                INDEG[i]+=Adjoint_list[j][i];
            }
        }
        vector<int>order_list=top_sort(Adjoint_list);
        for(i=0;i<order_list.size();i++)
        {
            printf("%d ",order_list[i]);
        }
        printf("\n");
    }
    return 0;
}
vector<int>top_sort(int s [][MAX])
{
    queue<int>Q;
    for(i=1;i<=node;i++)
    {
        if(INDEG[i]==0)
        {
            Q.push(i);
        }
    }
    vector<int>top_list;
    while(!Q.empty())
    {
        int N=Q.front();
        Q.pop();
        top_list.push_back(N);
        for(i=1;i<=node;i++)
        {
          if(s[N][i]==1)
          {
              INDEG[i]--;
              if(INDEG[i]==0)
              {
                  Q.push(i);
              }
          }
        }
    }
    return top_list;
}
