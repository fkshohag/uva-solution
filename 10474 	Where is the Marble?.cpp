# include <iostream>
# include <cstdio>
# include <algorithm>
using namespace std;
int a[10001],b[10001];
int main()
{
	//freopen("in.text","r",stdin);
	int n,q,c=0;
	while(scanf("%d %d",&n,&q)==2)
	{
		if (n==0 and q==0)break;
		for (int i = 0; i <n; i++)
		{
			scanf("%d",&a[i]);
		}
		for (int i = 0; i<q; i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		printf("CASE# %d:\n",++c);
		for (int i = 0; i <q; i++)
		{
			int key=0;
			for (int j = 0; j <n;j++)
			{
				if(b[i]==a[j]&& key!=1)
                    {
                        printf("%d found at %d\n",b[i],j+1);
                        key=1;
                    }
			}
			 if(key==0)
                {
                    printf("%d not found\n",b[i]);
                }
		}
	}
	return 0;
}
