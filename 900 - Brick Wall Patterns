# include <iostream>
# include <cstdio>
# define ll long long
using namespace std;
ll data[51];
int main()
{
    //freopen("in.text","r",stdin);
    data[1]=1;
    data[2]=2;
    for(int i=3;i<=50;i++)
    {
        data[i]=data[i-1]+data[i-2];
    }
    ll n;
    while(cin>>n)
    {
        if(n==0)break;
        cout<<data[n];
        cout<<endl;
    }
    return 0;
}
