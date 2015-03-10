# include <cstdio>
# include <iostream>
# include <algorithm>
# include <cstring>
# include <map>
# define MAX 100010
# define ll long long
ll par[MAX],group[MAX];
using namespace std;
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
        par[V]=U;
        group[U]+=group[V];
    }
    cout<<group[U]<<endl;
}
int main()
{
    string s1,s2;
    ll T,node,i,a,cnt,x,y;
    map<string,ll>m;
    cin>>T;
    while(T--)
    {
         a=0;
        cnt=0;
        m.clear();
        cin>>node;
        for(i=0;i<node;i++)
        {
            cin>>s1>>s2;
            if(m.find(s1)==m.end())
            {
               par[a]=a;
               group[a]=1;
               m[s1]=a++;
            }
            if(m.find(s2)==m.end())
            {
                par[a]=a;
                group[a]=1;
                m[s2]=a++;
            }
            x=m[s1];
            y=m[s2];
            unio_set(x,y);
        }
    }
    return 0;
}
