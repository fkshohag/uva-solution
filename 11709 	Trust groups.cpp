# include <iostream>
# include <cstdio>
# include <cstring>
# include <vector>
# include <map>
using namespace std;
# define N 1010
vector<int>edge[N];
vector<int>rdge[N];
vector<int>ans;
bool vis[N];
void Set()
{
	for(int i=0;i<N;i++)
	{
		edge[i].clear();
		rdge[i].clear();
	}
	ans.clear();
	memset(vis,false,sizeof vis);
}
void addEdge(int u,int v)
{
	edge[u].push_back(v);
	rdge[v].push_back(u);
}
void dfs(int n)
{
	vis[n]=true;
	for(int i=0;i<edge[n].size();i++)
	{
		int v=edge[n][i];
		if(!vis[v])
			dfs(v);
	}
	ans.push_back(n);
}
void revdfs(int n)
{
	vis[n]=false;
	for(int i=0;i<rdge[n].size();i++)
	{
		int v=rdge[n][i];
		if(vis[v])
			revdfs(v);
	}
}
int main()
{
	//freopen("in","r",stdin);
	int p,t;
	while(scanf("%d %d",&p,&t)==2)
	{
		if(p==0 && t==0)break;
		getchar();
		Set();
		map<string,int>Map;
		char person[100];
		for(int i=1;i<=p;i++)
		{
			gets(person);
			Map[person]=i;
		}
		for(int i=0;i<t;i++)
		{
			char person1[100];
			char person2[100];
			gets(person1);
			gets(person2);
			addEdge(Map[person1],Map[person2]);
		}
		for(int i=1;i<=p;i++)
			if(!vis[i])
				dfs(i);
			int c=0;
		for(int i=ans.size()-1;i>=0;i--)
			if(vis[ans[i]])
			{
				revdfs(ans[i]);
				c++;
			}
			printf("%d\n",c);
	}
	return 0;
}
