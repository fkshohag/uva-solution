# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
# define ll long long
ll ways[10001];
int coin(int i)
{
	return i*i*i;
}
void call()
{
	ways[0]=1;
	for(int i=1;i<22;i++)
	{
		int c=coin(i);
		for(int j=c;j<10000;j++)
			ways[j]+=ways[j-c];
	}
}
int main()
{
	//freopen("in","r",stdin);
	call();
	ll n;
	while(cin>>n)
	{
		cout<<ways[n]<<endl;
	}
	return 0;
}
