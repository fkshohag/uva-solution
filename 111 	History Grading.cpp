# include <iostream>
# include <cstdio>
# include <cstring>
# include <algorithm>
using namespace std;
# define si(x) scanf("%d",&(x))
# define rep(i,n)for(int (i)=1;i<=(n);i++)
int cur[21];
int nt[21];
int dp[21][21]={0};
int n;
int lcs()
{
	rep(i,n)
	rep(j,n)
		if(cur[i]==nt[j])dp[i][j]=dp[i-1][j-1]+1;
		else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	return dp[n][n];
}
int main()
{
	//freopen("in","r",stdin);
	int temp;
	si(n);
	rep(i,n)
	{
		si(temp);
		cur[temp]=i;
	}
	while(1)
	{
		rep(i,n)
		{
			if(si(temp)==EOF)return 0;
			nt[temp]=i;
		}
		printf("%d\n", lcs());
	}
	return 0;
	
}
