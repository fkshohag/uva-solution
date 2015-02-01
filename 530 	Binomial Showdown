# include <cstdio>
# include <iostream>
# define ll long long
using namespace std;
ll ncr(ll n,ll m)
{
if(m>n-m)m=n-m;
ll ans=1,i;
for(i=0;i<m;i++)
{
ans=ans*(n-i)/(i+1);
}
return ans;
}
int main()
{
   
ll n,k;
int cont=0;
while(cin>>n>>k)
{
    if(n==0 and k==0)break;
cout<<ncr(n,k);
cout<<endl;
}
return 0;
}
