# include <iostream>
# include <cstdio>
# include <cstring>
# include <algorithm>
using namespace std;
# define si(x) scanf("%d",&(x))
# define stsi(s)scanf("%s",&(s))
# define rep(i,n)for(int (i)=0;i<(n);i++)
struct DnaSort
{
	int num;
	char *line;
}a[101];
int n,m;
int bubble_sort(char str[],int n)
{
	int cont=0;
	rep(i,n-1)
	for(int j=i+1;j<n;j++)
		if (str[i]>str[j])
			cont++;
	return cont;
}
bool cmp(DnaSort a,DnaSort b)
{
	return a.num<b.num;
}
int main ()
{
    //freopen("in","r",stdin);
    int testCase;
    scanf ("%d", &testCase);
    bool blank = false;
    char str[101][55];
    while ( testCase-- ) {
        int n, m;
        scanf ("%d %d", &n, &m);

        for ( int i = 0; i < m; i++ ) {
            cin>>str[i];
            a[i].line=str[i];
            a [i].num = bubble_sort(str[i],n);
        }

        stable_sort (a, a + m, cmp);

        if ( blank ) printf ("\n");
        blank = true;

        rep(i,m)
        {
        rep(j,n)
        printf("%c",a[i].line[j]);
        printf("\n");
        }

    }

    return 0;
}

