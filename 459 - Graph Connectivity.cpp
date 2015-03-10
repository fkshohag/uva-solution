#include<iostream>
#include<cstdio>
#include<cstring>
#define max 1111
using namespace std;
int par[max],count=0;
void makeset(int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        par[i]=i;
    }
}

int find_friend(int n)
{
    if(par[n]==n)
    {
        return n;
    }
    else
    {
        return (par[n]=find_friend(par[n]));
    }
}

void make_friend(int u,int v)
{
    int U=find_friend(u);
    int V=find_friend(v);
    if(U!=V)
    {
        par[U]=V;
        count--;
    }
}

int main()
{
    char str[max],ch;

    int len,i,j,k,cas,x,a,b;

    scanf("%d",&cas);
    getchar();
    getchar();
    for(k=1;k<=cas;k++)
    {

        scanf("%c",&ch);
        getchar();
        x = ch-64;
        makeset(x);
        count = x;
        while(gets(str))
        {
            if(str[0]=='\0')
                break;
            a = str[0]-64;
            b = str[1]-64;

            make_friend(a,b);
        }
        if(k!=1)
            printf("\n");

        printf("%d\n",count);

    }
    return 0;
}
