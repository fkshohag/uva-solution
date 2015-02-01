    # include <cstdio>
    # include <iostream>
    # include <algorithm>
    # include <cstring>
    using namespace std;
    int dp[1010][1010];
    int lcs(char x[],char y[],int m,int n)
    {
    if(m==0||n==0)
    {
    return 0;
    }
    if(dp[m][n]!=-1)return dp[m][n];
    if(x[m-1]==y[n-1])
    {
    return dp[m][n]=1+lcs(x,y,m-1,n-1);
    }
    else
    {
    return dp[m][n]=max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
    }
    }
    int main()
    {
    char x[1100],y[1100];
    while(gets(x)&&gets(y))
    {
    memset(dp,-1,sizeof(dp));
    int m,n;
    m=strlen(x);
    n=strlen(y);
    printf("%d\n",lcs(x,y,m,n));
    }
    return 0;
    }
