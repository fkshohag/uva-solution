# include <iostream>
# include <cstdio>
# include <algorithm>
using namespace std;
# define inf 1000000000
# define ll long long
ll data[101][101];
int n;
int main()
{
	
	scanf("%d", &n);
	string s;
	for(int i=0;i<n;i++)
		for(int j=0;j<=i;j++)
			if(i==j)
			{
				data[i][j]=0;
			}
			else
			{
				cin>>s;
				if(s=="x")
					data[i][j]=inf;
				else
					data[i][j]=atoi(s.c_str());
					data[j][i]=data[i][j];
			}
		for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				data[i][j]=min(data[i][j],data[i][k]+data[k][j]);
	ll ans=0;
        for(int i=0;i<n;i++)
            ans=max(data[0][i],ans);
            printf("%lld\n", ans);
}
