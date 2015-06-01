# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
# define ll long long
ll ways[7500];
int n=11;
int coin[]={2000,1000,400,200,100,40,20,10,4,2,1};
void call()
{
	ways[0]=1;
	for(int i=0;i<n;i++)
	{
		int c=coin[i];
		for(int j=coin[i];j<7500;j++)
			ways[j]+=ways[j-c];
	}
}
int main()
{
	//freopen("in","r",stdin);
	call();
	ll n;
	double k;
	while(cin>>k)
	{
		n=k*20;
		if(n==0)break;
		printf("%6.2lf%17lld\n",k,ways[n]);
	}
	return 0;
}
