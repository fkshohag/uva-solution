# include <cstdio>
# include <iostream>
# include <cstring>
# include <math.h>
# define ll long long
using namespace  std;
ll par[30010],group[500010],maximum;;
void make_set(ll n)
{
    ll i;
    for(i=1;i<=n;i++)par[i]=i;
}
ll find_friend(ll n)
{
    if(par[n]==n)return n;
        return (par[n]=find_friend(par[n]));
}
void unio_set(ll u,ll v)
{
    ll U=find_friend(u);
    ll V=find_friend(v);
    if(U!=V)
    {
        par[U]=V;
        group[V]+=group[U];
    }
}
int main()
{
    ll T,n,m,i,a,b;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        make_set(n);
        for(i=1;i<=n;i++)
        {
            group[i]=1;
        }
        for(i=1;i<=m;i++)
        {
          cin>>a>>b;
          unio_set(a,b);
        }
        maximum=0;
        for(i=1;i<=n;i++)
        {
            if(group[i]>maximum)
            {
                maximum=group[i];
            }
        }
        cout<<maximum<<endl;
    }
    return 0;
}
