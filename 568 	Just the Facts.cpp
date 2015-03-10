# include <iostream>
# include <cstdio>
# include <cmath>
using namespace std;
int data[10010];
void fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
        while(ans%10==0)
        {
            ans/=10;
        }
        ans=ans%100000;
        data[i]=ans%10;
    }
}
int main()
{
    //freopen("in.text","r",stdin);
   fact(10000);
   int n;
   while(scanf("%d",&n)==1)
   {
       printf("%5d -> %d\n",n,data[n]);
   }
   return 0;
}
