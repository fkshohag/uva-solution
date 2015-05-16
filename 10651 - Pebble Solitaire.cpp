# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
# define si(x) scanf("%d",&(x))
# define stin(s)scanf("%s",&(s))
inline void Set(int &mask,int pos){mask=mask|(1<<pos);}
inline void Reset(int &mask,int pos){mask=mask &~(1<<pos);}
inline bool check(int mask,int pos){return(bool)(mask &(1<<pos));}
int dp[(1<<12+5)];
int solve(int mask)
{
	int &ret=dp[mask];
	if(ret!=-1)return ret;
	ret=__builtin_popcount(mask);
	for(int pos=0;pos<12;pos++)
	{
		if(pos<10 && !check(mask,pos) && check(mask,pos+1) && check(mask,pos+2))
		{
			int newmask=mask;
			Set(newmask,pos);Reset(newmask,pos+1);Reset(newmask,pos+2);
			ret=min(ret,solve(newmask));
		}
		if(pos>1&& !check(mask,pos) && check(mask,pos-1) && check(mask,pos-2))
		{
			int newmask=mask;
			Set(newmask,pos);Reset(newmask,pos-1);Reset(newmask,pos-2);
			ret=min(ret,solve(newmask));
		}
	}
	return ret;
}
int main()
{
	freopen("in","r",stdin);
	int test;
	char s[20];
	si(test);
	while(test--)
	{
		memset(dp,-1,sizeof dp);
		stin(s);
		int mask=0;
		for(int i=0;s[i];i++)if(s[i]=='o')Set(mask,i);
		int ret=solve(mask);
	printf("%d\n",ret);
	}
	return 0;
}
