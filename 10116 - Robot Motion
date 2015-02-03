# include <iostream>
# include <cstdio>
# include <algorithm>
# include <cstring>
using namespace std;
int main()
{
    //freopen("in.text","r",stdin);
    int r,c,s,i,j;
   while(scanf("%d %d %d",&r,&c,&s)==3)
   {
       if(r==0 && c==0 && s==0)break;
       int x=0,y=s-1,step=0;
       int dp[20][20];
       memset(dp,-1,sizeof dp);
       char data[20][20];
       for(i=0;i<r;i++)
        scanf("%s",data[i]);
       dp[x][y]=0;
       while(1)
       {
           step++;
           if(data[x][y]=='N')x--;
           else if(data[x][y]=='S')x++;
           else if(data[x][y]=='E')y++;
           else
            y--;
           if(x<0 ||y<0 || x>=r || y>=c)
           {
               printf("%d step(s) to exit\n",step);
               break;
           }
           if(dp[x][y]!=-1)
           {
              printf("%d step(s) before a loop of %d step(s)\n",dp[x][y],step-dp[x][y]);
              break;
           }
           dp[x][y]=step;
       }
   }
   return 0;
}
