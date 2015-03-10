# include <iostream>
# include <cstdio>
# include <vector>
# include <cstring>
# define MAX 1010
using namespace std;
vector<int>p;
int i,j,cont;
bool prim[MAX];
void sieve()
{
    p.push_back(1);
    for(i=4;i<=MAX;i+=2)
    {
        prim[i]=true;
    }
    for(i=3;i*i<=MAX;i+=2)
    {
        if(prim[i]==false)
        {
            for(j=i*i;j<=MAX;j+=i+i)
            {
                prim[j]=true;
            }
        }
    }
    for(i=2;i<=MAX;i++)
    {
        if(prim[i]==false)
        {
            p.push_back(i);
        }
    }
}
int main()
{
    //freopen("in.text","r",stdin);
    memset(prim,false,sizeof prim);
    sieve();
    int n,c;
    while(cin>>n>>c)
    {
        int primecont=0;
        for(i=0;;i++)
        {
            if(p[i]>n)break;
            primecont++;
        }
        int low,high;
        if(primecont%2==0)
        {
            low=primecont/2-c;
            high=low+2*c;
        }
        else
        {
            low=primecont/2-c+1;
            high=low+2*c-1;
        }
        if(low<0)
        {
            low=0;
        }
        if(high>primecont-1)
        {
            high=primecont;
        }
        printf("%d %d:",n,c);
        for(i=low;i<high;i++)
        {
            cout<<" "<<p[i];
        }
        cout<<endl<<endl;
    }
    return 0;
}
